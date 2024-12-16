#ifndef PRESEIDENTALPARDONFORM_HPP
#define PRESEIDENTALPARDONFORM_HPP

#include "AForm.hpp"

class President : public AForm
{
    private:

    public:
        President();
        President(const President &other);
        President &operator=(const President &other);
        ~President();
};

#endif