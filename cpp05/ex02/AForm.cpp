#include "AForm.hpp"

AForm::AForm() : _name("NoName"), _grade_execute(150), _grade_sign(150), _signed(false) {}

AForm::AForm(std::string name, const int grade) : _name(name), _grade_sign(grade), _grade_execute(150), _signed(false)
{
    if (_grade_sign < 0)
        throw AForm::GradeTooHighException();
    if (_grade_sign > 150)
        throw AForm::GradeTooLowException();
}

AForm::~AForm() {}

AForm::AForm(const AForm &other) : _grade_execute(150), _grade_sign(150), _signed(false)
{
    this->_signed = other._signed;
}

AForm &AForm::operator=(const AForm &other)
{
    if (this != &other)
        this->_signed = other._signed;
    return *this;
}

std::string AForm::getName() { return _name; }

bool AForm::getSigned() { return _signed; }

const int AForm::getGradeSign() { return _grade_sign; }

const int AForm::getGradeExecute() { return _grade_execute; }

void AForm::beSigned(Bureaucrat &other)
{
    if (other.getGrade() < _grade_sign)
    {
        _signed = true;
        signAForm(other, "ok");
    }
    else if (other.getGrade() > _grade_sign)
    {
        signAForm(other, "low");
        throw AForm::GradeTooLowException();
    }
}

void AForm::signAForm(Bureaucrat &other, std::string reason)
{
    if (reason == "ok")
        std::cout << other.getName() << " signed " << this->_name << std::endl;
    else
        std::cout << other.getName() << " couldn't sign " << this->_name << " because the grade is to low" << std::endl;
}