#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"

int main() {
    try {
        Intern someRandomIntern;
        AForm* form;

        form = someRandomIntern.makeForm("robotomy request", "Bender");
        if (form) {
            Bureaucrat zach("Zach", 1);
            zach.signAForm(*form);
            zach.executeForm(*form);
            delete form;
        }

        form = someRandomIntern.makeForm("unknown form", "Target");
        if (form) {
            delete form;
        }

    } catch (const std::exception &e) {
        std::cout << "Erreur principale : " << e.what() << std::endl;
    }

    return 0;
}
