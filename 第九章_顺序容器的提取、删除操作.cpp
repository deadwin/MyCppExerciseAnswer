//˳����������ȡ��ɾ������
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
	//��ȡ��һ��Ԫ��
	cout << vec.at(0) << endl;
	cout << vec[0] << endl;
	cout << vec.front() << endl;
	cout << *vec.begin() << endl;
	//ɾ��Ԫ��
	vec.erase(vec.begin());
	vec.erase(vec.begin() + 3, vec.begin() + 5);
	vec2.clear();
	return 0;
}