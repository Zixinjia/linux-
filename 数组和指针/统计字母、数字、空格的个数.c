#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
	char *str;
	int cnt1 = 0, cnt2 = 0, cnt3 = 0;
	str = (char *)malloc(100 * sizeof(char));
	gets(str);
	int i, len = strlen(str);
	for (i = 0; i < len; i++)
	{
		if (str[i] == ' ')
		{
			cnt1++;
		}
		else if (str[i] >= '0' && str[i] <= '9')
		{
			cnt2++;
		}
		else
		{
			cnt3++;
		}
	}
	printf("��ĸ�� : %d�� �������� %d�� �ո����� %d\n", cnt3, cnt2, cnt1);
	free(str);
	return 0;
}
