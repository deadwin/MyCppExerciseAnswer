//ex9.24  使用不同方式提取一个空vector的第一个元素
#include<vector>
#include<string>
#include<iostream>
#include<deque>
#include<list>
using namespace std;

int main()
{
	vector<int>vec(1,1);
	//vector<int>vec; 空vector
	cout<<vec.at(0)<<endl;
	cout << vec[0] << endl;
	cout << vec.front() << endl;
	cout << *vec.begin() << endl;

	return 0;
}