/**
 * Chapter 4,Section 2 DFS深度优先排序，迷宫
 * input:
5 4
0 0 3 2
0 0 1 0
0 0 0 0
0 0 1 0
0 1 0 0
0 0 0 1
 * output: 7
 */
#include <stdio.h>

int book[100][100],box[100][100],m,n,p,q,min=99999999;

void dfs(int startX, int startY, int step)
{
	if(startX == p && startY == q)
	{
		if (step < min)
		{
			min = step;
		}
		return;
	}

	int dir[4][2] = {{0,1},{1,0},{0,-1},{-1,0}};
	for (int i = 0; i < 4; ++i)
	{
		int tx = startX + dir[i][0];
		int ty = startY + dir[i][1];
		if (tx >= 0 && tx < m && ty >= 0 && ty < n)
		{
			if (book[tx][ty] == 0 && box[tx][ty] == 0)
			{
				book[tx][ty] = 1;
				dfs(tx, ty, step + 1);
				book[tx][ty] = 0;
			}
		}
	}
}

int main()
{
	int startX, startY;

	printf("输入迷宫宽高：\n");
	printf("输入迷宫起点和终点：\n");
	printf("输入迷宫数据：\n");

	scanf("%d %d", &m, &n);
	scanf("%d %d %d %d", &startX, &startY, &p, &q);
	
	for (int i = 0; i < m; ++i)
	{
		for (int j = 0; j < n; ++j)
		{
			scanf("%d", &box[i][j]);
		}
	}

	box[startX][startY] = 1;
	dfs(startX, startY, 0);

	printf("min:%d\n", min);

	return 0;
}