//ex4.36����дint i��double b���������͵ĳ˷�i*=d
#include<iostream>
int main()
{
	int i = 2; double d = 3.15;
	i *= static_cast<int>(d);//d��Ҫ������
	return 0;
}