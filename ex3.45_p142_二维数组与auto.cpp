//ex3.45 使用auto关键字改写3.43程序
#include<iostream>
using namespace std;
int main()
{
	int ia[2][3] = { { 1, 2, 3, }, { 4, 5, 6 } };
	//版本1：使用范围for语句管理迭代过程
	for (auto &a : ia)            //用for循环遍历除了最内层外，其他层的控制变量都应该为引用类型
		for (auto b : a)      //可以加引用
			cout << b << " ";
	cout << endl;
	//版本2：使用下标运算符
	for (auto i = 0; i < 2; i++)
		for (auto j = 0; j < 3; j++)
			cout << ia[i][j] << ' ';
	cout << endl;
	
	//版本3：使用指针
	for (auto  *p = ia; p != ia + 2; p++)// 此处auto 为数组类型
		for (auto *q = *p; q != *p + 3; q++)
			cout << *q << ' ';
	cout << endl;




	return 0;
}