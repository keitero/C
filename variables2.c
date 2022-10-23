#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//
extern int a;
int main()
{
	printf("1:d%\n", a);
	{
		int b = 1;

			printf("2:d%\n", a);
		
		printf("%d\n", b);

	}
	printf("3:d%\n", a);
	return 0;
}