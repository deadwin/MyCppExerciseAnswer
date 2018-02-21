//比较2个string 对象的长度，返回较短的那个引用
#include<vector>
#include<string>
#include<iostream>
using namespace std;
using str=string[10];
const string &shortString(const string&s1, const string&s2)
{
	return s1.size() <= s2.size() ? s1 : s2;
}
int main()
{
	string s1 = "he", s2 = "hhe";
	string s3 = shortString(s1, s2);
	return 0;
}
