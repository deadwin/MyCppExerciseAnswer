//ex12.7 ������ָ������12.6

#include<vector>
#include<memory>
#include<string>
#include<iostream>
using namespace std;
shared_ptr<vector<int>> fun()
{
	shared_ptr<vector<int>> p = make_shared<vector<int >> ();
	return p;
}
shared_ptr<vector<int>> fun1()
{
	shared_ptr<vector<int>> p = fun();
	int n;
	while (cin >> n)
	{
		p->push_back(n);
	}
	return p;
}
int main()
{
	shared_ptr<vector<int>> p = fun1();
	for (auto &p1 : *p)
	{
		cout << *(&p1 + 0) << endl; //���б������p1�ĵ�ַ���
	}
	return 0;
}