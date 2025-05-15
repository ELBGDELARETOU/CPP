#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <map>
#include <cstdlib>
#include <cctype>

void loadBitcoinDB(const char* filename, std::map<std::string,double> &DB) {
    std::ifstream db(filename);
    if (!db.is_open()) {
        std::cerr << "Error: could not open BTC database file." << std::endl;
        std::exit(1);
    }
    std::string line;
    std::getline(db, line);

    while (std::getline(db, line)) {
        std::istringstream iss(line);
        std::string date, rateStr;
        if (std::getline(iss, date, ',') && std::getline(iss, rateStr)) {
            double rate = atof(rateStr.c_str());
            DB[date] = rate;
        }
    }
}

std::string trim(const std::string &str) {
    size_t start = 0;
    while (start < str.size() && isspace(str[start]))
        ++start;
    size_t end = str.size();
    while (end > start && isspace(str[end - 1]))
        --end;
    return str.substr(start, end - start);
}

bool isValidDate(const std::string& date) {
    if (date.size() != 10) return false;
    if (date[4] != '-' || date[7] != '-') return false;
    for (size_t i = 0; i < date.size(); ++i) {
        if (i == 4 || i == 7) continue;
        if (!isdigit(date[i])) return false;
    }
    int year = std::atoi(date.substr(0,4).c_str());
    int month = std::atoi(date.substr(5,2).c_str());
    int day = std::atoi(date.substr(8,2).c_str());
    if (year < 2009) return false;
    if (month < 1 || month > 12) return false;
    if (day < 1 || day > 31) return false;
    return true;
}

std::map<std::string,double>::const_iterator findClosestDate(const std::map<std::string,double> &DB, const std::string &date) {
    std::map<std::string,double>::const_iterator it = DB.lower_bound(date);
    if (it == DB.end())
        --it;
    else if (it->first != date) {
        if (it == DB.begin())
            return it;
        --it;
    }
    return it;
}

bool isValidValue(const std::string& valStr, double &val) {
    std::istringstream iss(valStr.c_str());
    iss >> val;
    if (iss.fail() || !iss.eof())
        return false;
    if (val < 0)
        return false;
    if (val > 1000)
        return false;
    return true;
}

void processUserFile(const char* filename, const std::map<std::string,double> &DB) {
    std::ifstream input(filename);
    if (!input.is_open()) {
        std::cerr << "Error: could not open file." << std::endl;
        std::exit(1);
    }
    std::string line;
    while (std::getline(input, line)) {
        if (line.empty())
            continue;

        size_t sep = line.find('|');
        if (sep == std::string::npos) {
            std::cerr << "Error: bad input => " << line << std::endl;
            continue;
        }

        std::string date = trim(line.substr(0, sep));
        std::string valueStr = trim(line.substr(sep + 1));

        if (!isValidDate(date)) {
            std::cerr << "Error: bad input => " << date << std::endl;
            continue;
        }

        double value;
        if (!isValidValue(valueStr, value)) {
            if (!valueStr.empty() && value < 0)
                std::cerr << "Error: not a positive number." << std::endl;
            else
                std::cerr << "Error: bad input => " << line << std::endl;
            continue;
        }

        if (value > 1000) {
            std::cerr << "Error: too large a number." << std::endl;
            continue;
        }

        std::map<std::string,double>::const_iterator it = findClosestDate(DB, date);
        double rate = it->second;

        double result = value * rate;

        std::cout << date << " => " << value << " = " << result << std::endl;
    }
}

int main(int argc, char** argv) {
    const char* btcDBFile = "data.csv";
    std::map<std::string,double> bitcoinDB;

    loadBitcoinDB(btcDBFile, bitcoinDB);

    if (argc != 2) {
        std::cerr << "Error: could not open file." << std::endl;
        return 1;
    }

    processUserFile(argv[1], bitcoinDB);

    return 0;
}
