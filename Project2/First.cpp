#include "Animal.h"
#include "Cat.h"
#include "Dog.h"
#include "Cow.h"

void main()
{
	//정적배열 할당
	Animal* asdf[] = {new Dog(), new Cat(), new Cow()};

	//각 객체들의 makeSound() 호출 : 기본클래스인 Animal의 순수가상함수라 없을수는 없다
	for (int i = 0; i < 3; i++)
	{
		if(asdf[i] != nullptr)
			asdf[i]->makeSound();
	}

	//동적 할당한 원소들 제거
	for (int i = 0; i < 3; i++)
	{
		delete asdf[i];
	}
}