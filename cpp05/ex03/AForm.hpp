#ifndef AAFORM_HPP
#define AAFORM_HPP

#include <iostream>
#include "Bureaucrat.hpp"

class Bureaucrat;

class AForm
{
private:
    const std::string _name;
    bool _signed;
    const int _grade_sign;
    const int _grade_execute;

public:
    AForm();
    AForm(std::string name);
    AForm(std::string name, const int signe, const int execute);
    AForm(const AForm &other);
    virtual ~AForm();
    AForm &operator=(const AForm &other);

    std::string getName() const;
    bool getSigned() const;
    int getGradeSign() const;
    int getGradeExecute() const;

    void beSigned(Bureaucrat &other);
    void signAForm(Bureaucrat &other);

    virtual void execute(const Bureaucrat &executor) const = 0;
    
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

    class FormNotSignedException : public std::exception
    {
    public:
        virtual const char *what() const throw()
        {
            return "Form not signed ...";
        }
    };
};

#endif