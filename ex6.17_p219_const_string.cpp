//ex6.17 函数str1()判断string对象是否含有大写字母，函数str2()改小写
#include<string>
#include<iostream>
using namespace std;
int str1(const string &s1)
{
	int count = 0;
	for (int i = 0; i < s1.size(); i++)
	{
		if (s1[i] >= 'A'&&s1[i] <= 'Z')
		{
			count++;
		}
	}
	return  count;
}
void str2(string &s1)
{
	for (int i = 0; i < s1.size(); i++)
	{
		if (s1[i] >= 'A'&&s1[i] <= 'Z')
		{
			s1[i] += 32;
		}
	}
}
int main()
{
	string s1 = "HeLlo";
	cout <<"大写字母个数："<< str1(s1) << endl;
	str2(s1);
	cout << "转换成小写字母："<<s1 << endl;
	return 0;
}
//参数类型不同，str1()形参为const类型，str2不是