#include <stdio.h>

void	prt_num(int *arr, int n, int m, int cur)
{
	if (cur == m)
	{
		for (int i = 0; i < m; i++)
		{
			if (i != 0)
				printf(" ");
			printf("%d", arr[i]);
		}
		printf("\n");
	}
	else
	{
		int tmp = cur + 1;
		if (cur != 0)
			tmp = arr[cur - 1] + 1;
		while (tmp <= n)
		{
			arr[cur] = tmp;
			prt_num(arr, n, m, cur + 1);
			tmp++;
		}
	}
}

int main(void)
{
	int n, m, arr[8];
	scanf("%d %d", &n, &m);
	prt_num(arr, n, m, 0);
	return (0);
}
