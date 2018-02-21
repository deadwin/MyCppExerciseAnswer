//ex3.43 编写3个版本的方法，令其均能输出ia的元素
//ex3.44改写3.43，使用类型别名来代替循环控制变量的类型
#include<iostream>
using namespace std;
int main()
{
	typedef int arr_1;
	typedef int arr1;
	typedef int shuzu[3];
	int ia[2][3] = { { 1, 2, 3, }, { 4, 5, 6 } };
	//版本1：使用范围for语句管理迭代过程
	for (arr_1(&a)[3] : ia)
		for (arr1 &b : a)
			cout << b << " ";
	cout << endl;
	//版本2：使用下标运算符
	for (int i = 0; i < 2; i++)
		for (int j = 0; j < 3; j++)
			cout << ia[i][j] << ' ';
	cout << endl;
	//版本3：使用指针
	for (int(*p)[3] = ia; p != ia + 2; p++)
		for (int *q = *p; q != *p + 3; q++)
			cout << *q << ' ';
	cout << endl;
	//数组类型的别名
	for (shuzu *p1 = ia; p1 != ia + 2; p1++)
		for (arr1 *p2 = *p1; p2 != *p1 + 3; p2++)
			cout << *p2 << ' ';
	cout << endl;

	return 0;
}