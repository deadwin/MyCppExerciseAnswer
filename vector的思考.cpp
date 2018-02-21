#include<iostream>
#include<vector>
using namespace std;
int main()
{
	vector<int*>vec;
		int*p = new int;
		int a = 5;
		p = &a;
		vec.push_back(p);
	for (auto &b : vec)
	{
		cout << *b << endl;
	}
	vector<int> ivec;
	for (int i = 0; i < 5; i++)
	{
		ivec.push_back(i*i);
	}
	vector<int>*vp = new vector<int>;
	vp = &ivec;
	for (auto &v : *vp)
	{
		cout << v << endl;
	}
	return 0;
	delete p;
	delete vp;
}