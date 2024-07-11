#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *insert(const char *s1, const char *s2, int n)
{
	int len1 = strlen(s1);
	int len2 = strlen(s2);
	int len = len1 + len2;
	// Ϊ���ַ��������ڴ�
	char *result = (char *)malloc((len + 1) * sizeof(char));
	// ���� s1 ��ǰ�벿�ֵ����ַ���
	strncpy(result, s1, n);
	// ���� s2
	strcpy(result + n, s2);
	// ���� s1 �ĺ�벿�ֵ����ַ���
	strcpy(result + n + len2, s1 + n);
	return result;
}

int main()
{
	char s1[100], s2[100];
	int n;

	scanf("%d", &n);
	scanf("%s%s", s1, s2);
	char *result = insert(s1, s2, n);

	// ������
	printf("�����õ����ַ���Ϊ: %s\n", result);

	free(result);

	return 0;
}