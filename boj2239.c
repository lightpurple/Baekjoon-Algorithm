#include <stdio.h>

typedef struct
{
	int line[9];
} board;

void prt_bd(board *bd)
{
	for (int i = 0; i < 9; i++, puts(""))
		for (int j = 0; j < 9; j++)
			printf("%d ", bd[i].line[j]);
}

int check_3by3(board *bd, int x, int y)
{
	int num[9];
	int xm, ym;

	xm = x;
	ym = y;
	for (y = ym - 3; y < ym; y++)
		for (x = xm - 3; x < xm; x++)
			num[bd[y].line[x] - 1]++;
	for (int i; i < 9; i++)
		if (num[i] != 1)
			return (1);
	return (0);
}

void make_line(int *line)
{

}

int	rcv(board *bd, int idx)
{
	if (idx == 3 || idx == 6 || idx == 9)
	{
		for (int i = 2; i < 9; i += 3)
			if (check_3by3(bd, i, idx - 1))
				return (1);
		rcv(bd, idx++);
	}
	else
	{
		make_line(bd[idx].line);
	}
}

int main(void)
{
	board bd[9];

	for (int i = 0; i < 9; i++)
		for (int j = 0; j < 9; j++)
			scanf("%d", &bd[i].line[j]);
	printf("------------------\n");
	rcv(bd, 0);
	prt_bd(bd);
	return (0);
}
