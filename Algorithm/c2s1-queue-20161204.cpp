/**
 * Chapter 2,Section 1 队列
 * 
 * output: 615947283
 */
#include <stdio.h>
int main()
{
	int q[100]={6,3,1,7,5,8,9,2,4},head,tail;
	head=0;
	tail=9;

	while(head<tail){
		printf("%d", q[head]);

		head++;
		q[tail]=q[head];
		head++;
		tail++;
	}

	getchar();


	return 0;
}