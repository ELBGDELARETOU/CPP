#include <iostream>

int main(int argc, char **argv)
{
    int i = 0;
    int count = 1;


    (void)argc;
    if (!argv[count])
        return(std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl, 0);
    while(argv[count])
    {
        while(argv[count][i])
            std::cout << (char)std::toupper(argv[count][i++]);
        i = 0;
        count++;       
        if(argv[count])
            std::cout << " ";
    }
    return (std::cout<< std::endl,0);
}