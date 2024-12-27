#pragma once
#include "Animal.h"
#include "Dog.h"
#include "Cat.h"
#include "Cow.h"

class Zoo
{
private :
	Animal* animal[10];
	int cnt = 0;

public:
	void addAnimal(Animal* _animal);
	void performActions();
	~Zoo();
};