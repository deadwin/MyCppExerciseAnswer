/*5.23
编写一段程序，从标准输入读取两个整数，输出第一个数
除以第二个数的结果。

5.24
修改你的程序，使得当第二个数是0时抛出异常。先不要设定catch子句，
运行程序并真的为除数输入0，看看会发生什么？

5.25
修改上一题的程序，使用try语句块去捕获异常。catch子句
应该为用户输出一条提示信息，询问其是否输入新数并重新执行try语句块的内容。
*/
#include<iostream>
#include<string>
#include<stdexcept>
using namespace std;
using std::runtime_error;
int main()
{
	int a, b;
lable:	cin >> a >> b;
	try{
		if (b == 0)
		{
			throw runtime_error("被除数不能为0");
			cout << a / b << endl;
		}
	}
	catch (runtime_error err){             //err不能丢
		cout << err.what() <<endl<< "请重新输入" << endl;
		goto lable;
	}
	return 0;
}