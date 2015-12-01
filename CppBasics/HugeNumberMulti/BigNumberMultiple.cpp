#include <iostream>
#include <stdlib.h>
#include <string.h>

using namespace std;

#define MAX 10000

/***************************************/
int fmul(char s1[],char s2[]);

/***************************************/
char sum[MAX];

/***************************************/
/*子函数计算两个数的乘积*/
int fmul(char s1[], char s2[])
{
	int ls1, ls2;//用于存储长度，进位信息
	int i=0, j, p, q, m;
	int k=0,flag;
	char mid[MAX];

	ls1 = strlen(s1);
	ls2 = strlen(s2);

	//反向
	j = ls1-1;
	while (j >= 0)
	{
		mid[i++] = s1[j--];
	}
	mid[i] = s1[ls1];
	strcpy(s1,mid);
	i = 0;
	j = ls2 - 1;
	while ( j >= 0)
	{
		mid[i++] = s2[j--];
	}

	mid[i] = s2[ls2];
	strcpy(s2, mid);

	// cout<<s1<<endl<<s2<<endl;
	//计算
	for (i = 0;i < MAX; i++)
	{
		sum[i]='0';
	}
    i = j = k = 0;
	flag = 0;
	p = 0;
	q = 0;
	while (s2[i] != '\0')
	{
		flag=0;
		m=q;
		for (m = 0; m < q; m++)
		{
			mid[m] = '0';
		}
		p = m;
        while (s1[j] != '\0')
		{
			k = (s1[j] - '0') * (s2[i] - '0');
			mid[p] = (flag+k) % 10 + '0';
			flag = (flag + k) / 10;
			j++;
			p++;
		}

		if (flag != 0)
		{
			mid[p++] = flag+'0';
		}
	
		mid[p] = '\0';
		flag = 0;
		p = 0;

		//*********************************************/  
		if (i == 0)
		{
			while (mid[p] != '\0')
			{
				sum[p] = mid[p];
				p++;
			}
		}
		else
		{   
			while (mid[p] != '\0')
			{
				k = (sum[p] - '0') + (mid[p] - '0');
				sum[p] = (k+flag) % 10 + '0';
				flag = (k + flag) / 10;
				p++;
			}

			if (flag != 0)
			{
				sum[p++] = flag + '0';
				flag = 0;
			}
		}

		j = 0;
		i++;
		q++;
	}

	sum[p] = '\0';
	i = 0;
	j = 0;
	strcpy(mid, sum);
	p -= 1;
	
	while(p >= 0)
	{
		sum[j] = mid[p];
		p--;
		j++;
	}

	sum[j] = '\0';
	return 0;
}


/*主函数*/
int main()
{
	char s1[30] = "11223344556677889900112233";
	char s2[30] = "99887766554433221100998877";
	fmul(s1,s2);
	cout << sum << endl;

	getchar();
	return 0;
}
