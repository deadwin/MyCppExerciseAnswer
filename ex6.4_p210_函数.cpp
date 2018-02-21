//ex6.4函数与求阶乘
//ex6.5求函数实参绝对值
#include<iostream>
using namespace std;
//阶乘
int jiecheng(int n)
{
	int sum = 1;
	while (n > 1)
	{
		sum *= n;
		n--;
	}
	if (n < 0)
	{
		return 0;
	}
	return sum;
}
//绝对值
int jueduizhi(int n)
{
	return n > 0 ? n : -n;
}
int main()
{
	cout << "input a num:" << endl;
	int n;
	cin >> n;
	cout << "num的阶乘:" << jiecheng(n) << endl;
	cout << "num的绝对值：" << jueduizhi(n) << endl;
	return 0;
}
//参考http://blog.csdn.net/fengzhanghao23/article/details/48462387