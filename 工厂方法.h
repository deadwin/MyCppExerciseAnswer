#include<string>
#include<iostream>
using namespace std;
class Operation{
public:
	double numberA, numberB;
	virtual double getResult()
	{
		return 0;
	};
};
class addOpreation :public Operation
{
private:
	double getResult()
	{
		return numberA + numberB;
	}
};
class subOpreation :public Operation
{
	double getResult()
	{
		return numberA - numberB;
	}
};
class mulOperation :public Operation
{
	double getResult()
	{
		return numberA*numberB;
	}
};
class divOperation :public Operation
{
	double getResult()
	{
		return numberA / numberB;
	}
};
class IFactory
{	
public:
	virtual Operation*createOperation()=0;
};
class addFactory :public IFactory
{
public:
	static Operation*createOperation()
	{
		return new addOpreation();
	}
};
class SubFactory :public IFactory
{
public:
	static Operation*createOperation()
	{
		return new subOpreation();
	}
};
class MulFactory : public IFactory
{
public:
	static Operation *createOperation()
	{
		return new mulOperation();
	}
};

class DivFactory :public IFactory
{
public:
	static Operation *createOperation()
	{
		return new divOperation();
	}
};