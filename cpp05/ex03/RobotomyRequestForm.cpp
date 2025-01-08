#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm()
    : AForm("Robotomy Request", 72, 45) {}

RobotomyRequestForm::RobotomyRequestForm(std::string target)
    : AForm("Robotomy Request", 72, 45), _target(target) {}

void RobotomyRequestForm::execute(const Bureaucrat &executor) const
{
    if (!getSigned())
        throw FormNotSignedException();
    if (executor.getGrade() > getGradeExecute())
        throw GradeTooLowException();
    std::cout << "Bzzzzzzzzzzzzzzz..." << std::endl;
    if (rand() % 2 == 0)
    {
        std::cout << getName() << " has been robotomized successfully!" << std::endl;
    }
    else
    {
        std::cout << "Robotomy failed on " << getName() << "." << std::endl;
    }
}
