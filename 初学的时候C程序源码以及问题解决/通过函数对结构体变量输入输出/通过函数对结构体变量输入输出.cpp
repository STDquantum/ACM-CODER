/*
  2013��8��31�� 19:57:38
  ͨ�������Խṹ������������
*/
#include <stdio.h>
#include <string.h>//strcpy_s��ͷ�ļ�

struct Student 
{
	int age;
	char sex;
	char name[100];

};

void OutputStudent (struct Student * pstu)
{
	printf ("%d %s %c\n", pstu->age, pstu->name, pstu->sex);//%s������ַ�����������ַ� �෴Ҳͬ�� ���򲻱����޷�����
}

void InputStudent (struct Student * pst)
{
	(*pst).age = 18;
	strcpy_s (pst->name, "СԶ");//strcpy_s�Ǹ��ַ�����ֵ�ģ��� СԶ �����ݸ��Ƶ�name��
	pst->sex = 'N';
}

int main (void)
{
	struct Student st;

	InputStudent (&st);
	OutputStudent (&st);


	return 0;
}