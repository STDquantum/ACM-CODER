/*
����2013��9��1�� 14:15:09
  ��ð�������������룶����������
*/
#include <stdio.h>

void sort (int * a, int len) //��������
{
	int i, j, t;

	for (i = 0; i < len - 1; ++i)
	{
		for (j = 0; j < len - 1 - i; ++j)
		{
			if (a[j] > a[j + 1])// ����>Ϊ����<Ϊ����
			{
				t = a[j];
				a[j] = a[j + 1];
				a[j + 1] = t;
			}
		}
	}
}

int main (void)
{
	int a[6];
	int i = 0;
	char ch;

	printf ("�����룶�����֣��м��Կո�ֿ���\n");

	scanf_s ("%d %d %d %d %d %d", &a[0], &a[1], &a[2], &a[3], &a[4], &a[5]);

	while ( (ch=getchar()) !='\n' )//����ϴ�scanf�������������
		continue;

	sort (a, 6);

	for (i = 0; i < 5; ++i)
	{
		printf ("%d<", a[i]);
	}
	printf ("%d\n", a[5]);

	return 0;
}