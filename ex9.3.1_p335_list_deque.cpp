//ex9.18 ��ϰdeque<string>�͵�����
//ex9.19 ��list����9.18��deque 
//ex9.20 ��list<int>�п���Ԫ�ص�2��deque<int>��
#include<vector>
#include<string>
#include<iostream>
#include<deque>
#include<list>
using namespace std;
//ex9.18
void print(const deque<string>&deq)
{
	for (auto bg = deq.begin(); bg != deq.end(); bg++)
	{
		cout << *bg << endl;
	}
}
//ex9.19
void printlist(const list<string>&lst)
{
	for (auto bg = lst.begin(); bg != lst.end(); bg++)
	{
		cout << *bg << endl;
	}
}
//ex9.20 ����ż���ֱ���
void copyList(const list<int>&lst,deque<int>&dq1,deque<int>&dq2)
{
	for (auto bg = lst.begin(); bg != lst.end(); bg++)
	{
		if (*bg % 2 == 0)
		{
			dq1.push_back(*bg);
		}
		else if (*bg % 2 != 0&&*bg>=0)
		{
			dq2.push_back(*bg);
		}
	}
}
int main()
{
	deque<string>deq;
	string s;
	while (cin >> s)
	{
		deq.push_back(s);
	}
	print(deq);


	list<string>lst;
	lst.push_back("he");
	lst.push_back("zz");
	lst.push_back("aa");
	printlist(lst);


	list<int>inlst;
	deque<int>dq1;
	deque<int>dq2;
	for (int i = 1; i < 10; i++)
	{
		inlst.push_back(i);
	}
	copyList(inlst,dq1,dq2);


	return 0;
}