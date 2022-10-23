#define _CRT_SECURE_NO_WARNINGS 1//函数报错，放第一行
//变量与常量
//规范：类型 变量的名字 = 0；
#include <stdio.h>
//int main()
//{
//	int age = 20;
//	double weight = 75.3;
//
//	age = age + 1;
//	weight = weight - 10;
//	printf("%d\n", age);
//	printf("%lf\n", weight);
//
//	return 0;
//}
//%d  整型
//%f  float
//%lf  double
//int a = 100;
//int main()
//{      //大括号内定义的变量为局部变量，反之为全局变量
//	int a = 10;
//	   //局部优先
//	printf("%d\n", a);
//
//	return 0;
//}

//问题:求两个整数的和
int main()
{
	int a = 0;
	int b = 0;
	scanf("%d %d", &a, &b);//scanf为输入函数
	int sum = a + b;
	printf("sum = %d\n", sum);
	
	return 0;
}
