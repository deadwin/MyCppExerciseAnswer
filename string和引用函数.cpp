//string和引用函数，返回较小的string的引用
#include<iostream>
#include<string>
using namespace std;
const string&bijiao(const string&s1, const string s2)
{
	return s1.size() <= s2.size() ? s1 : s2;
}
int main()
{
	string s1 = "heel", s2 = "hello";
	string s3 = bijiao(s1, s2);
	return 0;
}