/*2013��7��25�� 11:43:58
  Ŀ��:����ϴ�scanf�������������
*/
#include<stdio.h>

int main (void)
{
	int i;
	char ch;

	scanf_s ("%d", &i);
	printf ("i = %d\n", i);
	//......
	while ( (ch=getchar()) !='\n' )//����ϴ�scanf������������ݣ���Ȼ
		continue;               //��һ�û�������i��ֵʱ���治С�İ���������ĸ���������ݻ�������������ֱ�����õ������j�� ����������j
	int j;
	scanf_s ("%d", &j);
	printf ("j = %d\n", j);

	return 0;
}