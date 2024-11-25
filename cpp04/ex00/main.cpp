#include "Animal.hpp"
#include "WrongAnimal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"

int main()
{
    const Animal *meta = new Animal();
    const Animal *j = new Dog();
    const Animal *i = new Cat();
    const WrongAnimal *k = new WrongCat();

    std::cout << "Should be a Wrong animal" << std::endl;
    std::cout << k->getType() << " " << std::endl;
    k->makeSound();
    std::cout << "Should be a Dog" << std::endl;
    std::cout << j->getType() << " " << std::endl;
    j->makeSound();
    std::cout << "Should be a Cat" << std::endl;
    std::cout << i->getType() << " " << std::endl;
    i->makeSound();
    std::cout << "Uninitialized animal" << std::endl;
    meta->makeSound();

    delete meta;
    delete j;
    delete i;
    delete k;

    return 0;
}
