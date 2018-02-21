#include <iostream>  
#include <string>  
using namespace std;
class Singleton
{
private:
	int i;
	static Singleton*instance; //一个Singleton类型指针
	Singleton(int i)           //一个构造函数
	{
		this->i = i;
	}
public:
	static Singleton*getInstance()  //一个返回值是Singleton类型指针的函数
	{
		return instance;         
	}
	void show()
	{
		cout << i << endl;
	}
};
