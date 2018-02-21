int main()
{
	return 0;
}
/*
ex2.27：下面的哪些初始化是合法的？请说明原因。
（a）int I = -1, &r = 0;
（b）int *const p2 = &i2;
(c) const int I = -1, &r = 0; (d) const int *const p3 = &i2;
(e) const int *p1 = &i2;
(f). const int &const r2;
(g) const int i2 = i, &r = I;

a不合法，&r表示引用，须初始化左值。
b合法，常量指针,指针指向的地址不能改变
c合法
d合法，指向常量的常量指针,既不能修改指针指向的地址，
             也不能通过指针修改该地址存放的值
e合法，指向常量的指针，不能通过p1修改该地址存放的值
f不合法，引用本身不是对象，没有const属性
g合法
*/
/*
ex2.28 ：说明下面的这些定义是什么意思，挑出其中不合法的。
(a) int i ,*const cp;
(b) int *p1 ,*const p2;
(c) const int rc, &rc =ic;
(d) const int *const p3;
(e) const int *p;

a不合法，cp必须初始化
b不合法，p1和p2必须初始化
c不合法，rc必须初始化，并且使用错误，可改为int ic; const int &rc = ic;
d不合法，p3已经声明为const类型，所以必须先初始化一个初值
e不合法，同d
*/
/*
ex2.29：假设已有上一个练习中定义的那些变量，则下面的哪些语句是合法的？请说明原因。
（a）i = ic;
(b) p1 = p3;
(c) p1 =⁣
(d) p3 = ⁣
(e) p2 = p1;
(f) ic =* p3; 

a合法，ic-const int，i-int
b不合法，p3需要初始化，p1是int*,p3是const int const*
c不合法，类型不一致
d合法
e不确定，不合法
f不合法，ic不能被赋值了
*/



/* 
网上参考答案：
2.27
(a)引用需要用对象初始化
（b）正确 常量指针一直指向i2
（c）const int &r = 0；正确 常量引用
（d）指向常量对象的常量指针 而且指针指向位置也不变
（e）指向常量对象的常量指针
（f）必须初始化
（g）正确

2.28
（a）常量指针没有初始化
（b）常量指针没有初始化
（c）常量整型没有初始化
（d）一个指向常量对象的常量指针必须初始化
（f）一个指向常量的指针 没有初始化 合法

2.29
（a）用const int 赋值 可以
（b）p1是int指针 p3是const int 指针 无法从“const int const ”转换为“int ”
(c) 无法从“const int const ”转换为“int ”
(d)如果这句是初始化 可以！！已经初始化过 这句话不行
（e）因为p1指向的对象可能发生变化 不合法
（f）ic不能被赋值
*/