#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>
#include "AForm.hpp"

class AForm;

class Bureaucrat
{
private:
    const std::string _name;
    int _grade;

public:
    Bureaucrat();
    Bureaucrat(std::string name, int grade);
    Bureaucrat(const Bureaucrat &other);
    Bureaucrat &operator=(const Bureaucrat &other);
    ~Bureaucrat();

    std::string getName() const;
    int getGrade() const;

    void increment(int idx);
    void decrement(int idx);
    
    void executeForm(AForm const & form);
    void signAForm(AForm &form);

    class GradeTooHighException : public std::exception
    {
    public:
        virtual const char *what() const throw()
        {
            return "Grade too high ...";
        }
    };

    class GradeTooLowException : public std::exception
    {
    public:
        virtual const char *what() const throw()
        {
            return "Grade too low ...";
        }
    };
};

std::ostream &operator<<(std::ostream &os, const Bureaucrat &Bureaucrat);

#endif