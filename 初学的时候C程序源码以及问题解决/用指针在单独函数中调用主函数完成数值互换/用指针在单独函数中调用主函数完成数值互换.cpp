/*
  2013��8��21�� 18:44:28
  Ŀ�ģ���ָ���ڵ��������е��������������ֵ����
*/
#include <stdio.h>
void zz (int *, int *);

int main (void)
{
	int a;
	int b;

	scanf_s ("%d %d", &a, &b);

	zz (&a, &b);

	printf ("a = %d, b = %d",a, b);

	return 0;
}

void zz (int * p, int * q)
{
	int t;

	t = *p;//*p��ʾa ֻ�������ſ��Ըı���������a��b��ֵ��
	*p = *q;
	*q = t;

}
