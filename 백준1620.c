#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct
{
	int		num;
	char	name[21];
}			poket;

int			cmp_name(const void *a, const void *b)
{
	poket	*pa;
	poket	*pb;

	pa = (poket *)a;
	pb = (poket *)b;
	return (strcmp(pa->name, pb->name));
}

int			find_name(poket *dict, char *str, int start, int last)
{
	int	mid;
	int	flag;

	mid = (start + last) / 2;
	flag = strcmp(dict[mid].name, str);
	if (flag > 0)
		return (find_name(dict, str, start, mid - 1));
	else if (flag < 0)
		return (find_name(dict, str, mid + 1, last));
	else
		return (dict[mid].num);
}

int			main()
{
	int N, M, num;
	char	tmp[21];
	poket	*dict_num;
	poket	*dict_name;

	scanf("%d %d", &N, &M);
	dict_num = (poket *)malloc(sizeof(poket) * N);
	dict_name = (poket *)malloc(sizeof(poket) * N);
	for (int i = 0; i < N; i++)
	{
		scanf("%s", dict_num[i].name);
		strcpy(dict_name[i].name, dict_num[i].name);
		dict_name[i].num = dict_num[i].num = i + 1;
	}
	qsort(dict_name, N, sizeof(poket), cmp_name);
	for (int i = 0; i < M; i++)
	{
		scanf("%s", tmp);
		if (*tmp >= '0' && *tmp <= '9')
		{
			num = atoi(tmp);
			printf("%s\n", dict_num[num - 1].name);
		}
		else
		{
			num = find_name(dict_name, tmp, 0, N - 1);
			printf("%d\n", num);
		}
	}
	return (0);
}
