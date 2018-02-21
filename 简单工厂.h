#include<iostream>
#include<string>
using namespace std;
class Operation
{
public:
	double numberA, numberB;
	virtual double getResult()
	{
		return 0;
	}
};
class Add :public Operation
{
public:
	double getResult()
	{
		return numberA + numberB;
	}
};
class Sub :public Operation
{
public:
	double getResult()
	{
		return numberA - numberB;
	}
};
class Mul :public Operation
{
public:
	double getResult() 
	{
		return numberA * numberB;
	}
};
class Div :public Operation
{
public:
	double getResult()
	{
		return numberA / numberB;
	}
};
class Factory
{
public:
	static Operation*create(char c)
	{
		switch (c)
		{
		case '+' :
			return new Add;
			break;
		case('-') :
			return new Sub;
			break;
		case('*') :
			return new Mul;
			break;
		case('/') :
			return new Div;
			break;
		}
	}
};

