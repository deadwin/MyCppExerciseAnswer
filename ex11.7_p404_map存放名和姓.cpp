/*
ex11.7定义一个map,关键字是家庭的姓，值是一个vector,保存家中孩子（们）的名。
编写代码，实现添加新的家庭以及向已有家庭中添加新的孩子。 
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
			cout << "姓: " << fam.first << " 名: " << *it << endl;
		}
	}
	return 0;
}
