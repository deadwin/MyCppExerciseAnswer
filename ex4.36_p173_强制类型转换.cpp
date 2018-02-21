//ex4.36，书写int i和double b的整数类型的乘法i*=d
#include<iostream>
int main()
{
	int i = 2; double d = 3.15;
	i *= static_cast<int>(d);//d需要加括号
	return 0;
}