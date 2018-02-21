//ex6.21 
//ex6.22 ½»»»2¸öintÖ¸Õë
#include<iostream>
using namespace std;
int print(const int n,const int * p)
{
	return n > *p ? n : *p;
}
void sp(int *a, int *b)   
{
	int *temp = a;
	a = b;
	b = temp;
	cout << *a << " " << *b << endl;
}
int main()
{
	int a = 5, b = 4;
	cout << print(a, &b) << endl;
	sp(&a, &b);
	return 0;
}