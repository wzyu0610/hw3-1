#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#pragma warning(suppress : 4996)
#pragma warning(disable : 4996)
void main(void)
{
	char string1[60] = "Welcome";
	char string2[60];

	int len;

	strcpy(string2, string1);
	printf("string2=%s\n", string2);

	len = strlen(string2);
	printf("¦r¦êªø«×¬°%d\n", len);

	system("pause");
	return 0;
}