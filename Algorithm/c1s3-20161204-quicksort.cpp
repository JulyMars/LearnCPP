/**
 * Chapter 1,Section 3 快速排序
 * input: 10
6 1 2 7 9 3 4 5 10 8
 * output: 2 3 3 5 8
 */
#include <stdio.h>

int a[100],n;

void quicksort(int left, int right)
{
	if(left > right)
		return;

	int i,j,t,tmp;
	tmp=a[left];
	i=left;
	j=right;
	while(i!=j)
	{
		while(a[j]>=tmp && i<j)
			j--;
		while(a[i]<=tmp && i<j)
			i++;
		if(i<j){
			t=a[i];
			a[i]=a[j];
			a[j]=t;
		}
	}

	a[left] = a[i];
	a[i] = tmp;

	quicksort(left, i-1);
	quicksort(i+1, right);

	return;
}

int main()
{
	int i,j;
	
	scanf("%d", &n);
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);

	quicksort(0,n-1);

	for(i=0;i<n;i++)
		printf("%d ",a[i]);

	getchar();
	getchar();
	return 0;
}