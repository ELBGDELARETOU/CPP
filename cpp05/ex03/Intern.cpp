#include "Intern.hpp"

Intern::Intern() {}

Intern::Intern(const Intern &other) {(void)other;}

Intern &Intern::operator=(const Intern &other) {
    (void)other;
    return *this;
}

Intern::~Intern() {}

AForm* makeShrubbery(const std::string &target) {
    return new ShrubberyCreationForm(target);
}

AForm* makeRobotomy(const std::string &target) {
    return new RobotomyRequestForm(target);
}

AForm* makePardon(const std::string &target) {
    return new PresidentialPardonForm(target);
}

AForm* Intern::makeForm(const std::string &formName, const std::string &target) {
    typedef AForm* (*FormCreator)(const std::string &);
    struct FormPair {
        std::string name;
        FormCreator creator;
    };

    FormPair forms[] = {
        {"shrubbery creation", makeShrubbery},
        {"robotomy request", makeRobotomy},
        {"presidential pardon", makePardon}
    };

    for (int i = 0; i < 3; i++) {
        if (forms[i].name == formName) {
            std::cout << "Intern creates " << formName << std::endl;
            return forms[i].creator(target);
        }
    }

    std::cout << "Error: Form name '" << formName << "' not recognized!" << std::endl;
    return NULL;
}
