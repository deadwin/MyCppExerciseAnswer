.//ex10.1  Á·Ï°countº¯Êý
//ex 10.2  
#include<algorithm>
#include<vector>
#include<iostream>
#include<list>
using namespace std;
int main()
{
	vector<int>vec;
	vec.push_back(20);
	vec.push_back(20);
	for (int i = 0; i < 5; i++)
	{
		vec.push_back(i);
	}
	vec.push_back(20);
	cout << count(vec.begin(), vec.end(), 20)<<endl;

	list<string>lst = { "hi", "hello", "hi", "abc" };
	cout << count(lst.begin(), lst.end(), "abc")<<endl;

	return 0;
}