//ex4.33 ˵�������������ʽ�ĺ���
int main()
{
	int someValue = 10, x = 1, y = 4;
	int a = (someValue ? ++x, ++y : --x, --y);
	return 0;
}
/*���۲ο�https://www.zhihu.com/question/27214955
someValue ? ++x, ++y : --x, --y�ȼ���
(someValue?++x, ++y : --x),--y
�ȼ���
someValue?y:--y
*/