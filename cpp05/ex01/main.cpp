#include "Bureaucrat.hpp"
#include "Form.hpp"

int main()
{
    try
    {
        Bureaucrat bureaucrat("john", 123);
        Form form("Bryan", 12);
        form.beSigned(bureaucrat);
    }
    catch (const std::exception &e)
    {
        std::cout << "Bureaucrat: Erreur attrapée : " << e.what() << std::endl;
    }
}