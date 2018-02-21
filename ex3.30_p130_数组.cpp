//指出下面代码中的索引错误
int main()
{
	const size_t array_size = 10;
//此处const原题为constexpr,为C++11新关键词，VS2013编译不通过
	int ia[array_size];
	for (size_t ix = 0; ix <array_size; ++ix)
		ia[ix] = ix;
	return 0;
}
/*数组下标使用越界。 for循环改成
for(size_t ix=0;ix<array_size;++ix)
即可
*/