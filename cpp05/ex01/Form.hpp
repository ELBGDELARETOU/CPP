#ifndef FORM_HPP
#define FORM_HPP

#include <iostream>
#include "Bureaucrat.hpp"

class Form
{
private:
    const std::string _name;
    bool _signed;
    const int _grade_sign;
    const int _grade_execute;

public:
    Form();
    Form(std::string name, const int grade);
    Form(const Form &other);
    ~Form();
    Form &operator=(const Form &other);

    std::string getName();
    bool getSigned();
    const int getGradeSign();
    const int getGradeExecute();

    void beSigned(Bureaucrat &other);
    void signForm(Bureaucrat &other, std::string reason);

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

#endif