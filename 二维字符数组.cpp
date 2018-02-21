//多维数组的越界输出
#include<iostream>
int main()
{
	char ch[3][4] = { "AAA", "BB", "CCC" }, (*q)[4] = ch, *p;
	p = new char;
	*p = 'b';
	*(*q + 3) = *p;
	std::cout << q[0] << std::endl;
	
	return 0;
	
}