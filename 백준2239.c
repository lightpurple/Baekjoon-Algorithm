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
/*
void fill_row_one(board *bd)
{
	int cnt;
	int num;
	int which;
	for (int i = 0; i < 9; i++)
	{
		cnt = 0;
		num = 0;
		for (int j = 0; j < 9; j++)
			if (bd[i].line[j])
			{
				cnt++;
				num += bd[i].line[j];
			}
			else
				which = j;
		if (cnt == 8)
		{
			num = 45 - num;
			bd[i].line[which] = num;
		}
	}
}

void fill_col_one(board *bd)
{
	int cnt;
	int num;
	int which;
	for (int i = 0; i < 9; i++)
	{
		cnt = 0;
		num = 0;
		for (int j = 0; j < 9; j++)
			if (bd[j].line[i])
			{
				cnt++;
				num += bd[j].line[i];
			}
			else
				which = j;
		if (cnt == 8)
		{
			num = 45 - num;
			bd[which].line[i] = num;
		}
	}
}

void check_3by3(board *bd, int i, int j)
{
	int im, jm;
	int num = 0;
	int cnt = 0;
	int x, y;

	im = i + 3;
	jm = j + 3;
	for (; i < im; i++)
		for (j = jm - 3; j < jm; j++)
		{
			if (bd[i].line[j])
			{
				cnt++;
				num += bd[i].line[j];
			}
			else
			{
				x = j;
				y = i;
			}
		}
	if (cnt == 8)
	{
		num = 45 - num;
		bd[y].line[x] = num;
	}
}

void fill_3by3(board *bd)
{
	for (int i = 0; i < 9; i += 3)
		for (int j = 0; j < 9; j += 3)
			check_3by3(bd, i, j);
}
*/

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

void fill_line(board *bd)
{
	fill_col_one(bd);
	fill_row_one(bd);
	fill_3by3(bd);
	rcv(bd, 0);
}

int main(void)
{
	board bd[9];

	for (int i = 0; i < 9; i++)
		for (int j = 0; j < 9; j++)
			scanf("%d", &bd[i].line[j]);
	printf("------------------\n");
	fill_line(bd);
	prt_bd(bd);
	return (0);
}
