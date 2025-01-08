#include "AForm.hpp"

AForm::AForm() : _name("NoName"), _signed(false), _grade_sign(150), _grade_execute(150) {}

AForm::AForm(std::string name) : _name(name), _signed(false), _grade_sign(150), _grade_execute(150) {}

AForm::AForm(const AForm &other) : _name(other._name), _signed(other._signed), _grade_sign(other._grade_sign), _grade_execute(other._grade_execute) {}

AForm::AForm(std::string name, const int signe, const int execute) : _name(name), _signed(false), _grade_sign(signe), _grade_execute(execute)
{
    if (_grade_sign < 0)
        throw AForm::GradeTooHighException();
    if (_grade_sign > 150)
        throw AForm::GradeTooLowException();
}

AForm::~AForm() {}

AForm &AForm::operator=(const AForm &other)
{
    if (this != &other)
        _signed = other._signed;
    return *this;
}

std::string AForm::getName() const { return _name; }

bool AForm::getSigned() const { return _signed; }

int AForm::getGradeSign() const { return _grade_sign; }

int AForm::getGradeExecute() const { return _grade_execute; }

void AForm::beSigned(Bureaucrat &other)
{
    if (other.getGrade() > _grade_sign)
        throw GradeTooLowException();
    _signed = true;
}

void AForm::signAForm(Bureaucrat &other)
{
    try {
        beSigned(other);
        std::cout << other.getName() << " signed " << this->_name << std::endl;
    } catch (const GradeTooLowException &e) {
        std::cout << other.getName() << " couldn't sign " << this->_name << " because the grade is too low" << std::endl;
    }
}
