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
        {
            if (argv[count][i] > 96 && argv[count][i] < 123)
                argv[count][i] -= 32;
            i++;
        }
        i = 0;
        std::cout << argv[count];
        count++;       
        if(argv[count])
            std::cout << " ";
    }
    return (std::cout<< std::endl,0);
}