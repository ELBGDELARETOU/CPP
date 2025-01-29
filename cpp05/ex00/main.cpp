#include "Bureaucrat.hpp"

int main()
{
    try
    {
        Bureaucrat b1;
    }
    catch (const std::exception &e)
    {
        std::cout << "Erreur attrapée : " << e.what() << std::endl;
    }
    try
    {
        Bureaucrat b2("John", 1);
        b2.getGrade();
        b2.increment(150);
    }
    catch (const std::exception &e)
    {
        std::cout << "Erreur attrapée : " << e.what() << std::endl;
    }
    return 0;
}