#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main() {
    try {
        Bureaucrat joe("Joe", 150);          // Grade trop bas pour signer Shrubbery
        Bureaucrat mike("Mike", 70);         // OK pour signer Robotomy mais pas pour exécuter
        Bureaucrat zach("Zach", 5);          // OK pour signer et exécuter tout

        ShrubberyCreationForm shrubForm("Garden");
        RobotomyRequestForm robotForm("Robot");
        PresidentialPardonForm pardonForm("Zaphod");

        // Tentative de signature
        try {
            joe.signAForm(shrubForm);
        } catch (const std::exception &e) {
            std::cout << "Erreur lors de la signature de ShrubberyCreationForm : " << e.what() << std::endl;
        }

        try {
            mike.signAForm(robotForm);
        } catch (const std::exception &e) {
            std::cout << "Erreur lors de la signature de RobotomyRequestForm : " << e.what() << std::endl;
        }

        try {
            zach.signAForm(pardonForm);
        } catch (const std::exception &e) {
            std::cout << "Erreur lors de la signature de PresidentialPardonForm : " << e.what() << std::endl;
        }

        // Tentative d'exécution
        joe.executeForm(shrubForm); // Joe ne peut pas exécuter car non signé
        mike.executeForm(robotForm); // Mike ne peut pas exécuter car grade insuffisant
        zach.executeForm(pardonForm); // Zach peut exécuter

        // Zach signe et exécute ShrubberyCreationForm
        try {
            zach.signAForm(shrubForm);
            zach.executeForm(shrubForm);
        } catch (const std::exception &e) {
            std::cout << "Erreur avec ShrubberyCreationForm par Zach : " << e.what() << std::endl;
        }

    } catch (const std::exception &e) {
        std::cout << "Erreur principale : " << e.what() << std::endl;
    }

    return 0;
}
