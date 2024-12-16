#include "Bureaucrat.hpp"
#include "Form.hpp"

int main()
{
    try
    {
        Bureaucrat bureaucrat("john", 31);
        Form form("Bryan", 120);
        form.beSigned(bureaucrat);
    }
    catch (const Bureaucrat::GradeTooHighException &e)
    {
        std::cout << "Bureaucrat: Erreur attrapée : " << e.what() << std::endl;
    }
    catch (const Bureaucrat::GradeTooLowException &e)
    {
        std::cout << "Bureaucrat: Erreur attrapée : " << e.what() << std::endl;
    }
    catch (const Form::GradeTooHighException &e)
    {
        std::cout << "Form: Erreur attrapée : " << e.what() << std::endl;
    }
    catch (const Form::GradeTooLowException &e)
    {
        std::cout << "Form: Erreur attrapée : " << e.what() << std::endl;
    }
}