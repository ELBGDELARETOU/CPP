#include "Form.hpp"

Form::Form() : _name("NoName"), _grade_execute(150), _grade_sign(150), _signed(false) {}

Form::Form(std::string name, const int grade) : _name(name), _grade_sign(grade), _grade_execute(150), _signed(false)
{
    if (_grade_sign < 0)
        throw Form::GradeTooHighException();
    if (_grade_sign > 150)
        throw Form::GradeTooLowException();
}

Form::~Form() {}

Form::Form(const Form &other) : _grade_execute(150), _grade_sign(150), _signed(false)
{
    this->_signed = other._signed;
}

Form &Form::operator=(const Form &other)
{
    if (this != &other)
        this->_signed = other._signed;
    return *this;
}

std::string Form::getName() { return _name; }

bool Form::getSigned() { return _signed; }

const int Form::getGradeSign() { return _grade_sign; }

const int Form::getGradeExecute() { return _grade_execute; }

void Form::beSigned(Bureaucrat &other)
{
    if (other.getGrade() < _grade_sign)
    {
        _signed = true;
        signForm(other, "ok");
    }
    else if (other.getGrade() > _grade_sign)
    {
        signForm(other, "low");
        throw Form::GradeTooLowException();
    }
}

void Form::signForm(Bureaucrat &other, std::string reason)
{
    if (reason == "ok")
        std::cout << other.getName() << " signed " << this->_name << std::endl;
    else
        std::cout << other.getName() << " couldn't sign " << this->_name << " because the grade is to low" << std::endl;
}