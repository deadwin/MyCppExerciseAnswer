//ָ����������е���������
int main()
{
	const size_t array_size = 10;
//�˴�constԭ��Ϊconstexpr,ΪC++11�¹ؼ��ʣ�VS2013���벻ͨ��
	int ia[array_size];
	for (size_t ix = 0; ix <array_size; ++ix)
		ia[ix] = ix;
	return 0;
}
/*�����±�ʹ��Խ�硣 forѭ���ĳ�
for(size_t ix=0;ix<array_size;++ix)
����
*/