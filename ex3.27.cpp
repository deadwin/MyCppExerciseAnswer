#include<iostream>
//定义非法的判断
int tex_size()
{
	return 0;
}
int main()
{
	tex_size();
	unsigned  buf_size = 1024;
	//int ia[buf_size]; a非法 ,buf_size是变量
	int ia[4 * 7 - 15];
	//int ia[tex_size()];  c非法，函数调用不是常量表达式
	//char st[11] = "fundamental"; d非法，数组越界
}
