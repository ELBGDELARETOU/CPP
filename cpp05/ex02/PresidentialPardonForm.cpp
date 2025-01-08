#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm()
    : AForm("Presidential Pardon", 25, 5) {}

PresidentialPardonForm::PresidentialPardonForm(std::string target)
    : AForm("Presidential Pardon", 25, 5), _target(target) {}

void PresidentialPardonForm::execute(const Bureaucrat &executor) const
{
    if (!getSigned())
        throw FormNotSignedException();
    if (executor.getGrade() > getGradeExecute())
        throw GradeTooLowException();
    std::cout << getName() << " has been pardoned by Zaphod Beeblebrox." << std::endl;
}
