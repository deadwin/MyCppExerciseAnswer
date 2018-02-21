//ex12.6 编写3个返回vector指针的函数，输入并打印出int值

#include<vector>
#include<string>
#include<iostream>
using namespace std;
vector<int>*fun()
{
	vector<int>*p = new vector<int>;
	return p;
	delete p;
}
vector<int>* fun1()
{
	vector<int>* p = fun();
	int n;
	while (cin >> n)
	{
		p->push_back(n);
	}
	return p;
	delete p;
}
int main()
{
	vector<int>*p = fun1();
	for (auto &p1 : *p)
	{
		cout << *(&p1+0)<< endl; //此行便于理解p1的地址情况
	}
	delete p;
	return 0;
}
//写法2，更简洁:   2017年4月17日19:12:44
/*
#include<vector>
#include<iostream>
using namespace std;
void print(vector<int>*ip){
for (const auto&n : *ip){
cout << n << endl;
}
}
void input(vector<int>*ip){
int n;
while (cin >> n){
(*ip).push_back(n);
}
print(ip);
delete ip;
}
vector<int>* func(){
vector<int>* ip = new vector<int>;
return ip;
}
int main(){
input(func());
return 0;
}
*/