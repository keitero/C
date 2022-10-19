//数据类型
//为了解决现实问题，所以需要先描述问题，举例：购物
//小数——浮点数，整数——整型
//char   字符数据类型
//short    短整型
//int    整型
//long   长整型
//long long    更长的整型
//float    单精度浮点数
//double    双精度浮点数
//int main()
//{
//	char ch = 'a';
//	int age = 20;
//	short num = 10;
//	float weight = 55.5;
//	double d = 0.0;
//	return 0;
//}

#include <stdio.h>

int main()
{
	//printf("%d\n", 100);
	printf("%d\n", sizeof(char));
	printf("%d\n", sizeof(short));
	printf("%d\n", sizeof(int));
	printf("%d\n", sizeof(long));
	printf("%d\n", sizeof(long long));
	printf("%d\n", sizeof(float));
	printf("%d\n", sizeof(double));
	
	return 0;
}
