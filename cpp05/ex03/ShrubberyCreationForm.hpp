#ifndef SHRUBBERYCREATIONFORM_HPP
#define SHRUBBERYCREATIONFORM_HPP

#include "AForm.hpp"
#include <fstream>
#include <iostream>

class ShrubberyCreationForm : public AForm
{

private: 
    std::string _target;
public:
    ShrubberyCreationForm();
    ShrubberyCreationForm(std::string target);
    virtual void execute(const Bureaucrat &executor) const;
};

#endif
