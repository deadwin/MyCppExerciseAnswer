#include"工厂方法.h"
int main()
{
	Operation *oper = MulFactory::createOperation();
	oper->numberA = 9;
	oper->numberB = 99;
	cout << oper->getResult() << endl;
	cin.get();
	return 0;
}