#include <stdio.h>
#include <stdlib.h>

int	N, M;

int	cmp(const void *a, const void *b)
{
	int	ia = *(int *)a;
	int	ib = *(int *)b;
	return (ib - ia);
}

int	is_over(int *tree, int cur)
{
	long long sum;
	int i;

	sum = 0;
	i = 0;
	while (i < N)
	{
		sum += tree[i] - cur;
		i++;
		if (tree[i] <= cur)
			break;
	}
	if (sum == M)
		return (1);
	else if (sum > M)
		return (0);
	else
		return (-1);
}

int	find_height(int *tree, int cur, int last)
{
	int flag;
	int mid;

	mid = (cur + last) / 2;
	flag = is_over(tree, mid);
	if (flag == 1)
		return (mid);
	else if (flag == 0)
	{
		if (is_over(tree, mid + 1) == -1)
			return (mid);
		return (find_height(tree, mid, last));
	}
	else
	{
		if (mid == 0)
			return (mid);
		else
			return (find_height(tree, cur, mid));
	}
}

int main(void)
{
	int	height;
	int	*tree;

	scanf("%d %d", &N, &M);
	tree = (int *)malloc(sizeof(int) * N);
	for (int i = 0; i < N; i++)
		scanf("%d", &tree[i]);
	qsort(tree, N, sizeof(int), cmp);
	height = find_height(tree, 0, tree[0]);
	printf("%d", height);
	return (0);
}
