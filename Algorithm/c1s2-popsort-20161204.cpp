/**
 * Chapter 1,Section 2 冒泡排序
 * input: 10
 * 8 100 50 22 15 6 1 1000 999 0
 * output: 1000 999 100 50 22 15 8 6 1 0
 */
#include <stdio.h>

int main()
{
	int list[100],i,j,t,n;

	scanf("%d", &n);
	for(i=0;i<n;i++)
		scanf("%d",&list[i]);

	for(i=0;i<n-1;i++)
	{
		for(j=0;j<n-i;j++)
		{
			if(list[j] < list[j+1]){
				t = list[j];
				list[j] = list[j+1];
				list[j+1] = t;
			}
		}
	}

	for(i=0;i<n;i++)
	{
		printf("%d ",list[i]);
	}

	getchar();
	getchar();
	return 0;
}