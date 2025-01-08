#ifndef PRESIDENTIALPARDONFORM_HPP
#define PRESIDENTIALPARDONFORM_HPP

#include "AForm.hpp"
#include <iostream>

class PresidentialPardonForm : public AForm
{
private:
    std::string _target;
public:
    PresidentialPardonForm();
    PresidentialPardonForm(std::string target);
    virtual void execute(const Bureaucrat &executor) const;
};

#endif
