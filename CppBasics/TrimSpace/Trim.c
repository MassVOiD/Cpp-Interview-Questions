#include <stdio.h>
#include <string.h>

void ltrim(char *src)
{
	int length = 0, p = 0, k = 0;
	length = strlen(src);

	if (length == 0)
	{
		return;
	}

	p = 0;
	while (src[p] == ' ' || src[p] == '\t')
	{
		p++;
	}

	if (p == 0)
	{
		return;
	}

	while (src[k] != '\0')
	{
		src[k++] = src[p++];
	}

	return;
}


// È¥µôÎ²²¿µÄ
void rtrim(char *s)
{
    int l=0,p=0;
    l = strlen(s);
    if (l == 0) 
	{
		return;
	}
    p = l -1;
    while (s[p] == ' ' || s[p] == '\t') 
	{
        s[p--] = '\0';
        if (p < 0) 
		{
			break;
		}
    }
    return;
}


void strallcut(char *str)
{
	int i,j=0;
	char sp[512];
	for (i = 0; *(str + i) != '\0'; i++) 
	{
		if (*(str + i) == ' ' )
		{
			continue;
		}

		sp[j++]=*(str + i);
	}

	sp[j] = 0;
	strcpy(str, sp);
}


void main()
{
	printf("Hello\n");

	getchar();
	return;
}
