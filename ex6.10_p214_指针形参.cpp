//ex6.10 ָ���βν�������ֵ
#include<iostream>
using namespace std;
int ab(int *a,int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
	return 0;
}
int main()
{
	int a = 3, b = 2;
	ab(&a, &b);
	cout <<a<<" "<<b<< endl;
	return 0;
}
