#include "Zoo.h"
#include <iostream>

using namespace std;

//배열에 원소 넣기
void Zoo::addAnimal(Animal* _animal)
{
	animal[cnt] = _animal;
	cnt++;
}

//배열 순차방문하여 목소리 내기
void Zoo::performActions()
{
	for (int i = 0; i < cnt; i++)
	{
		if (animal[i] == nullptr)
			return;

		animal[i]->makeSound();
	}
}

//Zoo객체 소멸, animal배열 내 원소들 동적해제;
Zoo::~Zoo()
{
	for (int i = 0; i < 10; i++)
	{
		delete animal[i];
	}
}
