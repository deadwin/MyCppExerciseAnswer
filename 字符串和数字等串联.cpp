#include<iostream>
#include<string>
#include<sstream>//字符串和数字拼接串联
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


