#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int main()
{
	char arr1[] = "abc\0";
	char arr2[] = { 'a', 'b', 'c' };
	
	int len1 = strlen("abc");

	printf("%s\n", arr1);
	printf("%s\n", arr2);
	printf("%d\n", len1);
	printf("%c\n", '\101');
	printf("%d\n", strlen("c:\test\328\test.c"));
	
	return 0;
}