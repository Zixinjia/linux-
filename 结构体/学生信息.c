#include <stdio.h>
#include <string.h>
typedef struct
{
	char name[20];
	char school_id[20];
	char location[20];
	char identify_id[20];
} student;
student s[10]; // �ṹ������s
int n;		   // ��¼����n
void input()
{

	for (int i = 0; i < n; i++)
	{
		scanf("%s %s %s %s", s[i].name, s[i].school_id, s[i].location, s[i].identify_id);
	}
}
void print()
{
	for (int i = 0; i < n; i++)
	{
		printf("%s %s %s %s\n", s[i].name, s[i].school_id, s[i].location, s[i].identify_id);
	}
}
// ͨ��ѧ�Ų���
student search(char id[])
{
	student res;
	for (int i = 0; i < n; i++)
	{
		if (strcmp(s[i].school_id, id) == 0)
		{
			res = s[i];
		}
	}
	return res;
}
int main()
{
	char id[10];
	printf("�����¼����: \n");
	scanf("%d", &n);
	printf("\n����%d��ѧ����Ϣ: \n", n);
	input(n);
	printf("\n���������ҵ�ѧ��ѧ��: \n");
	scanf("%s", id);
	printf("\n��Ҫ�ҵ�ѧ����Ϣ����: \n");
	student a = search(id);
	printf("%s %s %s %s\n", a.name, a.school_id, a.location, a.identify_id);
	printf("\n��������ʾ�����˵���Ϣ: \n");
	print(); 	 
	return 0;
}
