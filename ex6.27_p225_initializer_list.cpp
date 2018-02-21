//ex6.27  initializer_list形参
//ex6.2.6节练习答案参考http://blog.csdn.net/fengzhanghao23/article/details/48464451
#include<initializer_list>
#include<iostream>
using namespace std;
int arr(initializer_list<int> li)
{
	auto s = 0;
	for (auto beg = li.begin(); beg != li.end(); beg++)
	{
		s += *beg;
	}
	return s;
}
int main()
{
	initializer_list<int>li{ 1, 2, 3, 4, 5,  6, 7 };
	cout<<arr(li);
	return 0;
}