#include <stdio.h>
int main()
{
	int a[100]={6,3,1,7,5,8,9,2,4},head,tail;
	int i;

	head=0;
	tail=9;
	while(head<tail)
	{
		printf("%d",a[head]);
		head++;
		a[tail]=a[head];
		head++;
		tail++;
	}

	getchar();getchar();

	return 0;
}