//ex6.17 ����str1()�ж�string�����Ƿ��д�д��ĸ������str2()��Сд
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
	cout <<"��д��ĸ������"<< str1(s1) << endl;
	str2(s1);
	cout << "ת����Сд��ĸ��"<<s1 << endl;
	return 0;
}
//�������Ͳ�ͬ��str1()�β�Ϊconst���ͣ�str2����