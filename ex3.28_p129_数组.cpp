//下列数组中元素的值是什么
#include<string>
using namespace std;
string sa[10];
int ia[10];
int main()
{	
	string sa2[10];
	int ia2[10];
	return 0;
}
/*sa 和sa2 为元素类型为string 的数组，自动调用string 类的默认构造函数将
各元素初始化为空字符串；ia 为在函数体外定义的内置数组，各元素初始化为
0；ia2 为在函数体内定义的内置数组，各元素未初始化，其值不确定。
*/