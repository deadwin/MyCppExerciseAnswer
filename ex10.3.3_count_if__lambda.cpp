//ex10.3.3 Á·Ï°  count_ifËã·¨_lambda
#include<algorithm>
#include<vector>
#include<iostream>
#include<list>
#include<string>
using namespace std;
int main()
{ 
	vector<string>str = { "123456", "abcdef", "a", "ab", "acbderfsdf" };
	int n = count_if(str.begin(), str.end(), [](const string&str){
		return str.size() < 6; });
	auto tf = [](int &n){
		while (--n);
		return (n == 0);
	};
	cout << tf(n) << endl;
	return 0;
}