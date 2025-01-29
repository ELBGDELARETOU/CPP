#include "Form.hpp"

Form::Form() : _name("NoName"),_signed(false), _grade_sign(150), _grade_execute(150)  {}

Form::Form(std::string name, const int grade) : _name(name), _signed(false), _grade_sign(grade), _grade_execute(150)
{
    if (_grade_sign <= 0)
        throw Form::GradeTooHighException();
    if (_grade_sign > 150)
        throw Form::GradeTooLowException();
}

Form::~Form() {}

Form::Form(const Form &other) : _signed(false), _grade_sign(150), _grade_execute(150) 
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

int Form::getGradeSign() { return _grade_sign; }

int Form::getGradeExecute() { return _grade_execute; }

void Form::beSigned(Bureaucrat &other)
{
    if (other.getGrade() <= _grade_sign)
    {
        _signed = true;
        signForm(other);
    }
    else if (other.getGrade() > _grade_sign)
    {
        _signed = false;
        signForm(other);
        throw Form::GradeTooLowException();
    }
}

void Form::signForm(Bureaucrat &other)
{
    if (_signed == true)
        std::cout << other.getName() << " signed " << this->_name << std::endl;
    else
        std::cout << other.getName() << " couldn't sign " << this->_name << " because the grade is to low" << std::endl;
}