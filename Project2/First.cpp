#include "Animal.h"
#include "Cat.h"
#include "Dog.h"
#include "Cow.h"

void main()
{
	Animal* asdf[3];

	asdf[0] = new Dog();
	asdf[1] = new Cat();
	asdf[2] = new Cow();

	for (int i = 0; i < 3; i++)
	{
		if(asdf[i] != nullptr)
			asdf[i]->makeSound();
	}

	for (int i = 0; i < 3; i++)
	{
		delete asdf[i];
	}
}