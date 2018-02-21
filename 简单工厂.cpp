#include"¼òµ¥¹¤³§.h"
int main()
{
	Operation* test = Factory::create('+');
	test->numberA = 5;
	test->numberB = 10;
	cout << test->getResult() << endl;
	return 0;
}