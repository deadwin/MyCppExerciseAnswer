//ex5.5 用if else 语句将成绩转换成等级
#include<iostream>
using namespace std;
int main()
{
	cout << "input your score:" << endl;
	int num;
	cin >> num;
	if (num >=90)
	{
		cout << "A" << endl;
	}
	else if (num > 70)
	{
		cout << "B" << endl;
	}
	else if (num >= 60)
	{
		cout << "C" << endl;
	}
	else if (num < 60)
	{
		cout << "D" << endl;
	}
}