/*
  2013��7��27�� 13:07:15
  Ŀ�ģ���쳲����������еĸ���ֵ
*/

#include<stdio.h>

int main (void)
{
	int n;
	int f1, f2, f3;
	int i;
	char ch;

	xy:

	printf ("������Ҫ���������");
	scanf_s ("%d", &n);

	f1 = 1;
	f2 = 2;

	if (1 == n)
	{
		printf ("%d\n", n);
	}
	else if (2 == n)
	{
		printf ("%d\n", n);
	}
	else if (n >= 3)
	{
		for (i = 3; i <= n; ++i)
		{
			f3 = f1 + f2;
			f1 = f2;
			f2 = f3;
		}
		printf ("%d", f3);
	}
	else 
	{
		printf ("������һ��������\n");

		while ( (ch=getchar()) !='\n' )//����ϴ�scanf������������ݣ���Ȼ
		continue;

		goto xy;
	}

	return 0;
}