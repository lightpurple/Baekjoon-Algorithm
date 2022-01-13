#include <stdio.h>
#include <stdlib.h>

typedef struct
{
	int		start;
	int		end;
}			t_meet;

int			cmp(const void *a, const void *b)
{
	t_meet	*ta = (t_meet *)a;
	t_meet	*tb = (t_meet *)b;
	if (ta->end > tb->end)
		return (ta->end - tb->end);
	else if (ta->end == tb->end && ta->start > tb->start)
		return (ta->start - tb->start);
	return (0);
}

int			main()
{
	int	N;
	int	cnt;
	int	last;
	t_meet	*meet;

	scanf("%d", &N);
	meet = (t_meet *)malloc(sizeof(t_meet) * (N));
	for (int i = 0; i < N; i++)
		scanf("%d %d", &meet[i].start, &meet[i].end);
	qsort(meet, N, sizeof(t_meet), cmp);
	cnt = 1;
	last = (*meet).end;
	for (int i = 1; i < N; i++)
		if (last <= meet[i].end && last <= meet[i].start)
		{
			last = meet[i].end;
			cnt++;
		}
	printf("%d", cnt);
	return (0);
}
