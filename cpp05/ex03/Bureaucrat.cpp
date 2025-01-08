#include "Bureaucrat.hpp"
#include <stdexcept>

Bureaucrat::Bureaucrat() : _name("Bureaucrat"), _grade(150) {}

Bureaucrat::Bureaucrat(std::string name, int grade) : _name(name)
{
    if (grade < 1)
        throw Bureaucrat::GradeTooHighException();
    if (grade > 150)
        throw Bureaucrat::GradeTooLowException();
    _grade = grade;
}

Bureaucrat::Bureaucrat(const Bureaucrat &other) : _name(other._name), _grade(other._grade) {}

Bureaucrat &Bureaucrat::operator=(const Bureaucrat &other)
{
    if (this != &other)
    {
        _grade = other._grade;
    }
    return *this;
}

Bureaucrat::~Bureaucrat() {}

std::string Bureaucrat::getName() const { return _name; }

int Bureaucrat::getGrade() const { return _grade; }

void Bureaucrat::increment(int idx)
{
    if (_grade - idx <= 0)
        throw Bureaucrat::GradeTooHighException();
    _grade -= idx;
}

void Bureaucrat::decrement(int idx)
{
    if (_grade + idx > 150)
        throw Bureaucrat::GradeTooLowException();
    _grade += idx;
}

void Bureaucrat::signAForm(AForm &form)
{
    if (_grade > form.getGradeSign())
        throw AForm::GradeTooLowException();
    form.beSigned(*this);
    std::cout << _name << " signed " << form.getName() << std::endl;
}

void Bureaucrat::executeForm(AForm const &form)
{
    try
    {
        form.execute(*this);
        std::cout << _name << " executed " << form.getName() << std::endl;
    }
    catch (const std::exception &e)
    {
        std::cout << _name << " couldn't execute " << form.getName() << " because: " << e.what() << std::endl;
    }
}