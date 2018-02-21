//ex4.37 改写旧式的转换语句
#include<string>
using namespace std;
int main()
{
	int i; double d; const string *ps; char *pc; void *pv;
/*a    	pv = (void*) ps;
*  b       i=int(*pc);
*  c       pv=&d;
*  d     pc=(char*) pv;
*/
	pv = static_cast<void*>(const_cast<string*>(ps));
	i = static_cast<int>(*pc);
	pv = static_cast<void*>(&d);
	pc = static_cast<char*>(pv);

}
//完全不理解