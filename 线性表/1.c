#include <stdio.h>
int a[100], b[100];
int c[200];
int h[10010]; //��ϣ��
int main()
{
	// Lc�Ĵ�С
	int size = 0;
	//���Ա�Ԫ�ظ���
	int n1, n2;
	printf("�����뼯��A��B��Ԫ�ظ���\n");
	scanf("%d %d", &n1, &n2);
	printf("�����뼯��A��Ԫ��:\n");
	for (int i = 0; i < n1; i++)
	{
		scanf("%d", &a[i]);
		h[a[i]] = 1;
	}
	printf("�����뼯��B��Ԫ��:\n");
	for (int i = 0; i < n2; i++)
	{
		scanf("%d", &b[i]);
		h[b[i]] = 1;
	}
	//�ϲ�
	for (int i = 0; i < 10010; i++)
	{
		if (h[i])
		{
			c[size++] = i;
		}
	}
	printf("���Ա�C��Ԫ����:");
	for (int i = 0; i < size; i++)
	{
		printf("%d ", c[i]);
	}
	return 0;
}
