#define _CRT_SECURE_NO_WARNINGS 1//���������ŵ�һ��
//�����볣��
//�淶������ ���������� = 0��
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
//%d  ����
//%f  float
//%lf  double
//int a = 100;
//int main()
//{      //�������ڶ���ı���Ϊ�ֲ���������֮Ϊȫ�ֱ���
//	int a = 10;
//	   //�ֲ�����
//	printf("%d\n", a);
//
//	return 0;
//}

//����:�����������ĺ�
int main()
{
	int a = 0;
	int b = 0;
	scanf("%d %d", &a, &b);//scanfΪ���뺯��
	int sum = a + b;
	printf("sum = %d\n", sum);
	
	return 0;
}