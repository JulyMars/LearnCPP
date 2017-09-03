/**
 * Chapter 4,Section 3 BFS广度优先排序，迷宫
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

struct node
{
	int x;
	int y;
	int s;
};

int main()
{
	struct node que[2500];
	int head,tail;
	int m,n,p,q,startX,startY;
	int book[50][50],box[50][50];
	bool isEnd;

	printf("输入行列：\n");
	printf("输入起点终点：\n");
	printf("输入迷宫：\n");

	scanf("%d %d", &m, &n);
	scanf("%d %d %d %d", &startX, &startY, &p, &q);
	for (int i = 0; i < m; ++i)
	{
		for (int j = 0; j < n; ++j)
		{
			scanf("%d", &box[i][j]);
		}
	}

	head = 0;
	tail = 0;
	que[head].x = startX;
	que[head].y = startY;
	que[head].s = 1;
	book[startX][startY] = 1;
	tail++;

	isEnd = false;
	while(head < tail)
	{
		int nextStep[4][2] = {{0,1},{1,0},{0,-1},{-1,0}};
		for (int i = 0; i < 4; ++i)
		{
			int nx = que[head].x + nextStep[i][0];
			int ny = que[head].y + nextStep[i][1];
			if(nx < 0 || ny < 0 || nx >= m || ny >= n)
			{
				continue;
			}
			if(book[nx][ny] == 0 && box[nx][ny] == 0)
			{
				book[nx][ny] = 1;
				que[tail].x = nx;
				que[tail].y = ny;
				que[tail].s = que[head].s + 1;
				tail++;
				if(nx == p && ny == q)
				{
					isEnd = true;
					break;
				}
			}
		}
		if(isEnd){
			break;
		}
		head++;
	}

	if (isEnd)
	{
		printf("最短路径：%d\n", que[tail-1].s - 1);
	}
	else
	{
		printf("没有找到路径\n");
	}

	return 0;
}