//ex4.32解释下面这个循环的含义
#include<iostream>
using namespace std;
int main()
{
	const int size = 5;
	int ia[size] = { 1, 2, 3, 4, 5 };
	for (int *ptr = ia, ix = 0; ix != size&&ptr != ia + size; ++ix, ++ptr)
	{
		//cout<<"1 ";
	}
	return 0;
}
//结论：for循环循环了5次