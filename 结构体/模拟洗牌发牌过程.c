#include <stdio.h>
#include <time.h>
char suit[4][10] = {
	"spades", "hearts",
	"clubs", "diamonds"};
char face[13][10] = {
	"A", "2", "3", "4", "5",
	"6", "7", "8", "9", "10",
	"Jack", "Queen", "King"};
typedef struct
{
	char s[10];
	char f[10];
	int order;
} card;
void wash_card(card c[])
{
	int i;
	srand(time(NULL)); // ʹ�õ�ǰʱ����Ϊ���������
	for (i = 51; i > 0; i--)
	{
		int j = rand() % (i + 1); // ����һ��0��i�������
		card temp = c[j];
		c[j] = c[i];
		c[i] = temp;
	}
}
int main()
{
	// ����ṹ������洢52����
	card c[53];
	int k = 0;
	int i, j;
	for (i = 0; i < 4; i++)
	{
		for (j = 0; j < 13; j++)
		{
			strcpy(c[k].s, suit[i]);
			strcpy(c[k].f, face[j]);
			k++;
		}
	}
	// ϴ��
	wash_card(c);
	// ϴ�ƺ���˿���
	printf("\nϴ�ƺ���˿��ƣ�\n");
	for (i = 0; i < 52; i++)
	{
		printf("%s of %s\n", c[i].f, c[i].s);
	}
	// ����	��Ŀû����������Ӧ���Ǵ��
	for (int i = 0; i < 5; i++)
	{
		printf("%s %s\n", c[i].f, c[i].s);
	}
	return 0;
}
