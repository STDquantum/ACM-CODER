/*2013��7��25�� 17:41:59
  ���̣�����һ���� ��ʾ�����ĳɼ��ȼ�
  Ŀ�ģ�if�в���д�� 90<=a<=100
*/
#include<stdio.h>


int main (void)
{
	float a;

	xy:

	scanf_s ("%f", &a); 

	if (90 <= a && a <= 100) //����д�� 90<=a<=100
	{
		printf ("����\n");

	}
	else if (80 <= a && a < 90)
	{
		printf ("����\n");

	}
	else if (60 <= a && a < 80)
	{
		printf ("����\n");

	}
	else if (0 <= a && a <60)
	{
		printf ("������\n");

	}
	else if ( a>100)
	{
		printf ("���Σ�\n");

	}
	else
	{
		printf ("�ؼҰ�\n");

	}

	goto xy;

	return 0;
}