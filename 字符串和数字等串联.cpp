#include<iostream>
#include<string>
#include<sstream>//�ַ���������ƴ�Ӵ���
using namespace std;
int main(){
	int i = 4;
	string s = "hello";
	ostringstream oss;
	oss << s << i << endl;
	string str = oss.str();
	cout << str << endl;
	return 0;
}


