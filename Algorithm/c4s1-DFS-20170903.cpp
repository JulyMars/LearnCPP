/**
 * Chapter 4,Section 1 DFS深度优先排序，盒子里放数字
 * output: 全排列
 */
#include <stdio.h>

int book[100],box[100],n;

void dfs(int step)
{
	if (step >= n)
	{
		for (int i = 0; i < n; ++i)
		{
			printf("%d", box[i]+1);
		}
		printf("\n");
		return;
	}

	for (int i = 0; i < n; ++i)
	{
		if(book[i] == 0)
		{
			box[step] = i;
			book[i] = 1;
			dfs(step+1);
			book[i] = 0;
		}
	}
}

int main()
{
	scanf("%d", &n);

	for(int i=0;i<n;i++){
		box[i] = i;
		book[i] = 0;
	}
	dfs(0);

	return 0;
}