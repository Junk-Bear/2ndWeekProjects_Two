#pragma once
class Animal
{
public:
	virtual void makeSound() = 0; //순수가상함수화 : 파생클래스들은 무조건 제작해야함.
};