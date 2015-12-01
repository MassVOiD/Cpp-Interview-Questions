#include <stdio.h>

char *RevertString(char *str, int length)
{
	char *pStart = str;
	char *pEnd = str + length - 1;
	char chTemp;

	if (NULL != str)
	{
		while (pStart < pEnd)
		{
			chTemp = *pStart;
			*pStart++ = *pEnd;
			*pEnd-- = chTemp;
		}
	}

	return str;
}


void main()
{
	char s[] = "Hello, World!";

	printf("%s \n", s);
	printf("%s \n", RevertString(s, 13));

	getchar();
}


