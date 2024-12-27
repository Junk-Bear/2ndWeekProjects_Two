#include "Animal.h"
#include "Zoo.h"
#include <stdlib.h>
#include <ctime>
#include <iostream>

using namespace std;

Animal* createRandomAnimal();

void main()
{
	srand((unsigned int)time(NULL));

	Zoo* myZoo = new Zoo();

	//넣을 마릿수 입력.최대값 이상은 최대치 값으로 변경
	int cnt = 0;
	cout << "동물원에 넣을 동물수 (최대 10마리, 랜덤입양) :";
	cin >> cnt;
	cnt = cnt > 10 ? 10 : cnt;
	for (int i = 0; i < cnt; i++)
	{
		myZoo->addAnimal(createRandomAnimal());
	}

	myZoo->performActions();

	delete myZoo;
}

Animal* createRandomAnimal()
{

	switch (rand() % 3)
	{
	case 0:
		return new Dog();
	case 1:
		return new Cat();
	case 2:
		return new Cow();
	}

	return nullptr;
}
