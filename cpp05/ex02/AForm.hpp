#ifndef AAFORM_HPP
#define AAFORM_HPP

#include <iostream>
#include "Bureaucrat.hpp"

class AForm
{
private:
    const std::string _name;
    bool _signed;
    const int _grade_sign;
    const int _grade_execute;

public:
    AForm();
    AForm(std::string name, const int grade);
    AForm(const AForm &other);
    virtual ~AForm() = 0;
    AForm &operator=(const AForm &other);

    std::string getName();
    bool getSigned();
    const int getGradeSign();
    const int getGradeExecute();

    void beSigned(Bureaucrat &other);
    void signAForm(Bureaucrat &other, std::string reason);

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