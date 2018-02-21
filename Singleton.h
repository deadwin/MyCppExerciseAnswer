#include <iostream>  
#include <string>  
using namespace std;
class Singleton
{
private:
	int i;
	static Singleton*instance; //һ��Singleton����ָ��
	Singleton(int i)           //һ�����캯��
	{
		this->i = i;
	}
public:
	static Singleton*getInstance()  //һ������ֵ��Singleton����ָ��ĺ���
	{
		return instance;         
	}
	void show()
	{
		cout << i << endl;
	}
};
