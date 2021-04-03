#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>
#include<Windows.h>
#include<string.h>
int main()
{
	int i, j,ch;
	while ((ch = getchar()) != '\n')
	{
		if (ch < '0' || ch>'9')
			continue;
		putchar(ch);
	}
	return 0;
}