#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm()
    : AForm("Shrubbery Creation", 145, 137) {}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target)
    : AForm("Shrubbery Creation", 145, 137), _target(target) {}

void ShrubberyCreationForm::execute(const Bureaucrat &executor) const
{
    if (!getSigned())
        throw FormNotSignedException();
    if (executor.getGrade() > getGradeExecute())
        throw GradeTooLowException();
    std::ofstream file((getName() + "_shrubbery").c_str()); 
    if (file.is_open())
    {
        file << "    *\n";
        file << "   ***\n";
        file << "  *****\n";
        file << "    |\n";
        file.close();
    }
    else
    {
        std::cerr << "Error: Could not create file." << std::endl;
    }
}
