/*
ex11.7����һ��map,�ؼ����Ǽ�ͥ���գ�ֵ��һ��vector,������к��ӣ��ǣ�������
��д���룬ʵ������µļ�ͥ�Լ������м�ͥ������µĺ��ӡ� 
*/
#include <iostream>
#include <string>
#include <map>
#include <vector>

using namespace std;

int main()
{
	map<string, vector<string>>family;    
	vector<string>name;
	string fname, lname;
	cout << "input fname, lname" << endl;
	while (cin >> fname >> lname)
	{
		family[fname].push_back(lname);
	}
	for (auto &fam : family)
	{
		for (auto it = fam.second.begin(); it != fam.second.end(); it++)
		{
			cout << "��: " << fam.first << " ��: " << *it << endl;
		}
	}
	return 0;
}
