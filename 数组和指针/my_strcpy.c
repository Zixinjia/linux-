#include <stdio.h>
const int MaxLen = 10;
void my_strcpy(char *dest, char *src)
{
	int len = 0;
	while (*src != '\0' && len < MaxLen - 1)
	{

		*(dest + len) = *src;
		len++;
		src++;
	}
	// �����ֹ��
	*(dest + len) = '\0';
}
int main()
{
	char dest[MaxLen], src[MaxLen];
	scanf("%s", src);
	// �������Ŀ������
	my_strcpy(dest, src);
	printf("���ƺ���ַ��� == %s\n", dest);
	return 0;
}
