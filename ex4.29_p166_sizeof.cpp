//ex4.29 推断下面输出结果并运行
#include<iostream>
using namespace std;
int main()
{
	int x[10]; int*p = x;
	cout << sizeof(x) / sizeof(*x) << endl;
	cout << sizeof(p) / sizeof(*p) << endl;

	return 0;
}