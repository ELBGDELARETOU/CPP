#include "AMateria.hpp"
#include "IMateriaSource.hpp"
#include "Ice.hpp"
#include "Cure.hpp"
#include "ICharacter.hpp"

// int main()
// {
//     IMateriaSource *src = new MateriaSource();
//     src->learnMateria(new Ice());
//     src->learnMateria(new Cure());
//     ICharacter *me = new Character("me");
//     AMateria *tmp;
//     tmp = src->createMateria("ice");
//     me->equip(tmp);
//     tmp = src->createMateria("cure");
//     me->equip(tmp);
//     ICharacter *bob = new Character("bob");
//     me->use(0, *bob);
//     me->use(1, *bob);
//     delete bob;
//     delete me;
//     delete src;
//     return 0;
// }

int main()
{
	{
		IMateriaSource *src = new MateriaSource();
		src->learnMateria(new Ice());
		src->learnMateria(new Cure());
		ICharacter *me = new Character("me");
		AMateria *tmp;
		tmp = src->createMateria("ice");
		me->equip(tmp);
		tmp = src->createMateria("cure");
		me->equip(tmp);
		ICharacter *bob = new Character("bob");
		me->use(0, *bob);
		me->use(1, *bob);
		std::cout << std::endl;

		delete bob;
		delete me;
		delete src;
	}
	{
		IMateriaSource *src = new MateriaSource();
		AMateria *tmp;
		ICharacter *bob = new Character("Bob");

		src->learnMateria(new Ice());
		src->learnMateria(new Cure());
		src->learnMateria(new Ice());
		src->learnMateria(new Cure());

		tmp = src->createMateria("ice");
		bob->equip(tmp);
		tmp = src->createMateria("ice");
		bob->equip(tmp);
		tmp = src->createMateria("cure");
		bob->equip(tmp);
		tmp = src->createMateria("cure");
		bob->equip(tmp);
		tmp = src->createMateria("cure");
		bob->equip(tmp);
		tmp = src->createMateria("cure");
		bob->equip(tmp);
		tmp = src->createMateria("");
		bob->equip(tmp);

		bob->use(0, *bob);
		bob->use(1, *bob);
		bob->use(2, *bob);
		bob->use(3, *bob);

		bob->unequip(1);

		bob->use(0, *bob);
		bob->use(1, *bob);
		bob->use(2, *bob);
		bob->use(3, *bob);

		bob->use(5, *bob);
		bob->use(-5, *bob);

		delete src;
		delete bob;
		return 0;
	}
}