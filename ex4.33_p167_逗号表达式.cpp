//ex4.33 说明下面这条表达式的含义
int main()
{
	int someValue = 10, x = 1, y = 4;
	int a = (someValue ? ++x, ++y : --x, --y);
	return 0;
}
/*结论参考https://www.zhihu.com/question/27214955
someValue ? ++x, ++y : --x, --y等价于
(someValue?++x, ++y : --x),--y
等价于
someValue?y:--y
*/