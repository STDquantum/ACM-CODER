/*
   2013��9��1�� 18:19:45
   ѧ����Ϣ������������
*/
# include <stdio.h>
# include <malloc.h>

struct Student
{
	char sex;
	float scort;
	char name[100];
};

void InputStudent (struct Student * Aprr,int len)//���뺯��
{
	int i;
	char ch;

	for (i = 0; i < len;++i)
	{
		printf ("��%d��ѧ������Ϣ��\n",i + 1);

		printf ("������");
		scanf_s ("%s",Aprr[i].name,100);// VS�������ַ����ַ�����Ҫ�ӳ��ȣ�name�Ѿ����ַ��������ǵ�ַ������ʱ���ü�&
		while ( (ch=getchar()) !='\n' )//����ϴ�scanf������������ݣ���Ȼ
			continue;          

		printf ("�Ա���Ů/N/F����");
		scanf_s (" %c", &Aprr[i].sex,1);
		while ( (ch=getchar()) !='\n' )
			continue;          

		printf ("�ɼ���");
		scanf_s ("%f",&Aprr[i].scort);
		while ( (ch=getchar()) !='\n' )
			continue;          
	}
}

void OutputStudent (struct Student * Aprr, int len)//�������
{
	int j;
	for (j = 0; j < len; ++j)
	{
		printf ("������%s\n",Aprr[j].name);

		printf ("�Ա���Ů/N/F����%c\n",Aprr[j].sex);

		printf ("�ɼ���%f\n",Aprr[j].scort);
	}
}

void sort (struct Student * Aprr, int len) //ð������������
{
	int i,j;
	struct Student t;

	for(i = 0;i < len -1;++i)
	{
		for (j = 0; j < len - 1 - i; ++j)
		{
			if (Aprr[j].scort < Aprr[j + 1].scort)//����������
			{
				t = Aprr[j];                      //�����ǻ�������ѧ����������Ϣ
				Aprr[j] = Aprr[j + 1];
				Aprr[j + 1] = t;
			}
		}
	}
}

int main (void)
{
	int len;
	struct Student * P;

	printf ("������ѧ���ĸ���:\n");
	printf ("len = ");
	scanf_s ("%d",&len);

	P = (struct Student *)malloc(len * sizeof(struct Student));

	InputStudent (P,len);
	sort (P,len);

	printf ("\n\n\n");
	printf ("ѧ���ɼ�����:\n");

	OutputStudent (P,len);

	return 0;
}