#include <stdio.h>

int main()
{
	int list[10],n=5,t,i,j;

	for (int i = 0; i < 10; ++i)
	{
		list[i]=0;
	}

	for(int i=0;i<10;i++)
		printf("%d ",list[i]);

	for (int i = 0; i < n; ++i)
	{
		scanf("%d",&t);
		list[t]++;
	}

	for (int i = 0; i < 10; ++i)
	{
		if (list[i]>0)
		{
			printf("%d ",list[i]);
		}
	}

	getchar();
	getchar();

	return 0;
}
