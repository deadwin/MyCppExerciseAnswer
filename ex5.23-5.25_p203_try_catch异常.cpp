/*5.23
��дһ�γ��򣬴ӱ�׼�����ȡ���������������һ����
���Եڶ������Ľ����

5.24
�޸���ĳ���ʹ�õ��ڶ�������0ʱ�׳��쳣���Ȳ�Ҫ�趨catch�Ӿ䣬
���г������Ϊ��������0�������ᷢ��ʲô��

5.25
�޸���һ��ĳ���ʹ��try����ȥ�����쳣��catch�Ӿ�
Ӧ��Ϊ�û����һ����ʾ��Ϣ��ѯ�����Ƿ���������������ִ��try��������ݡ�
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
			throw runtime_error("����������Ϊ0");
			cout << a / b << endl;
		}
	}
	catch (runtime_error err){             //err���ܶ�
		cout << err.what() <<endl<< "����������" << endl;
		goto lable;
	}
	return 0;
}