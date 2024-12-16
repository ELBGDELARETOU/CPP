#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

int main()
{
    Animal *animals[100];

    // Animal animal;  
    for (int i = 0; i < 100; i++)
    {
        if (i < 50)
            animals[i] = new Dog();
        else
            animals[i] = new Cat();
    }
    for (int i = 0; i < 100; i++)
        animals[i]->makeSound();
    for (int i = 0; i < 100; i++)
        delete animals[i];
    
}
