#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int ADD(int x, int y)
{
	int z = 0;
	z = x + y;
	return z;
}

int main()
{
	int sum1 = 0;
	int a = 0;
	int b = 0;
	int i = 0;
	
	scanf("%d%d",&a,&b);
	
	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	while (i < 10)
	{
		sum1 = sum1 + arr[i];
		i = i++;
	}
	int sum2 = ADD(a, b);
	printf("%d\n%d", sum1,sum2);

	return 0;
}