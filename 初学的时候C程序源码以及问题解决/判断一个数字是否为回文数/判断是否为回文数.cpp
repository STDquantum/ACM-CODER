/*
2013��7��27�� 12:28:22
Ŀ�ģ��ж�һ�������Ƿ�Ϊ������
*/
#include<stdio.h>

int main (void)
{
	int val;
	int m;
	int sum = 0;

	printf ("��������Ҫ�жϵ����֣�");
	scanf_s ("%d", &val);

	m = val;                       //�ȼ���   for (m = val; m ; m /= 10)
	while(m)                       //              sum = sum * 10 + m % 10;
	{
		sum = sum * 10 + m % 10;
		m /= 10;
	}                              //

	if (sum == val)
	{
		printf ("yes\n");
	}
	else
		printf ("no\n");

	return 0;
}
