//ex4.10为while循环写个条件，使其从标准输入中读取整数，遇到42停止
#include<iostream>
using namespace std;
int main()
{
	int a;
	cin >> a;
	while (a != 42)
	{
		cin >> a;
	}
	return 0;
}