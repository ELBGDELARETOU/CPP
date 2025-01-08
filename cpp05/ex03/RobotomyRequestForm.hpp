#ifndef ROBOTOMYREQUESTFORM_HPP
#define ROBOTOMYREQUESTFORM_HPP

#include "AForm.hpp"
#include <cstdlib>
#include <iostream>

class RobotomyRequestForm : public AForm
{
private:
    std::string  _target;
public:
    RobotomyRequestForm();
    RobotomyRequestForm(std::string target);
    virtual void execute(const Bureaucrat &executor) const;
};

#endif
