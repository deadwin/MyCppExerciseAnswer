//ex9.24  ʹ�ò�ͬ��ʽ��ȡһ����vector�ĵ�һ��Ԫ��
#include<vector>
#include<string>
#include<iostream>
#include<deque>
#include<list>
using namespace std;

int main()
{
	vector<int>vec(1,1);
	//vector<int>vec; ��vector
	cout<<vec.at(0)<<endl;
	cout << vec[0] << endl;
	cout << vec.front() << endl;
	cout << *vec.begin() << endl;

	return 0;
}