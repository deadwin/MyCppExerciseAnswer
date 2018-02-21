/*
ex9.12 传递迭代器参数来拷贝范围
*/
#include<iostream>
#include<string>
#include<vector>
#include<list>
using namespace std;
typedef vector<int>::iterator ite;

int main()
{
	vector<double>db(10, 3.45);
	list<int> ls(db.begin()+1,db.end()-2);
	vector<int>it(10, 4);
	list<int>lint(it.begin(), it.end());
	return 0;
}