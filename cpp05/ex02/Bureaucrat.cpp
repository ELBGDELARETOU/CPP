#include "Bureaucrat.hpp"
#include <stdexcept>

Bureaucrat::Bureaucrat() : _name("Bureaucrat"), _grade(150) {}

Bureaucrat::Bureaucrat(std::string name) : _name(name) {}

Bureaucrat::Bureaucrat(std::string name, int grade) : _name(name)
{
    if (grade < 0)
        throw Bureaucrat::GradeTooHighException();
    if (grade > 150)
        throw Bureaucrat::GradeTooLowException();
    _grade = grade;
}

Bureaucrat::~Bureaucrat() {}

Bureaucrat::Bureaucrat(const Bureaucrat &other) {}

Bureaucrat &Bureaucrat::operator=(const Bureaucrat &other)
{
    if (this != &other)
    {
        this->_grade = other._grade;
    }
    return *this;
}

void Bureaucrat::decrement(int idx)
{
    if ((_grade - idx) > 150)
        throw Bureaucrat::GradeTooLowException();
    _grade += idx;
}

void Bureaucrat::increment(int idx)
{
    if ((_grade - idx) <= 0)
        throw Bureaucrat::GradeTooHighException();
    _grade -= idx;
}

int Bureaucrat::getGrade()
{
    return (_grade);
}

std::string Bureaucrat::getName() { return (_name); }