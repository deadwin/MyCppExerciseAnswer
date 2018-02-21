//顺序容器的提取、删除操作
#include<vector>
#include<string>
#include<iostream>
#include<deque>
#include<list>
using namespace std;

int main()
{
	vector<int>vec, vec2;
	for (int i = 0; i < 10; i++)
	{
		vec.push_back(i);
		vec2.push_back(i);
	}
	//提取第一个元素
	cout << vec.at(0) << endl;
	cout << vec[0] << endl;
	cout << vec.front() << endl;
	cout << *vec.begin() << endl;
	//删除元素
	vec.erase(vec.begin());
	vec.erase(vec.begin() + 3, vec.begin() + 5);
	vec2.clear();
	return 0;
}