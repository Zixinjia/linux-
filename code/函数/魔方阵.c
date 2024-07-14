#include <stdio.h>

int main()
{
	int a[100][100], n;
	scanf("%d", &n);
	int i, j, k;
	a[0][n / 2] = 1;
	// ����
	int row, col;
	row = 0, col = n / 2;
	for (k = 2; k <= n * n; k++)
	{
		// ��һ������n�ı���
		if ((k - 1) % n == 0)
		{
			a[(row + 1) % n][col] = k;
			row = row + 1;
			continue;
		}
		// ��ǰ���ڵ�0��
		if (row == 0)
		{
			a[n - 1][(col + 1) % n] = k;
			row = n - 1;
			col = col + 1;
			continue;
		}
		// ���һ��
		if (col == n - 1)
		{
			a[row - 1][0] = k;
			row = row - 1;
			col = 0;
		}
		else
		{
			a[row - 1][col + 1] = k;
			row--;
			col++;
		}
	}
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n; j++)
		{
			printf("a[%d][%d] == %d ", i, j, a[i][j]);
		}
		printf("\n");
	}
	return 0;
}
