#include <stdio.h>
int main()
{
	int e[10][10],i,j,k,m,n,t1,t2,t3;
	int inf=99999999;

	scanf("%d %d",&n, &m);
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			if(i==j)
				e[i][j]=0;
			else
				e[i][j]=inf;
		}
	}
	for(i=0;i<m;i++)
	{
		scanf("%d %d %d",&t1,&t2,&t3);
		e[t1-1][t2-1]=t3;
	}

	for(k=0;k<n;k++)
	{
		for(i=0;i<n;i++)
		{
			for(j=0;j<n;j++)
			{
				if(e[i][j]>e[i][k]+e[k][j])
					e[i][j]=e[i][k]+e[k][j];
			}
		}
	}

	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("%10d",e[i][j]);
		}
		printf("\n");
	}

	getchar();
	return 0;
}