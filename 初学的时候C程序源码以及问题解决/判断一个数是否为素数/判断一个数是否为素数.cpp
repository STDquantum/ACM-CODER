/*
  2013��8��4�� 14:10:14
  Ŀ�ģ��ж�һ�����Ƿ�Ϊ����
*/
# include<stdio.h>
#include<math.h>

bool IsPrime (int val) //bool��һ���µ��������� ֻ�����
{
	int i, qval;
	qval = (sqrt)(val*1.0);//ֻҪ˵��val��2����2֮�䶼���ܱ�����
	for (i = 2; i <= qval; ++i)
	{
		if (0 == val%i)
			break;
	}
	if (qval+1 == i)
		return true;
	else 
		return false;
}

int main (void)
{
	int m;

	while (1)
	{
		scanf_s ("%d", &m);
		if (0 == m)
			break;
		if ( IsPrime(m) )
			printf ("YES!\n");
		else 
			printf ("NO!\n");
	}

	return 0;
}