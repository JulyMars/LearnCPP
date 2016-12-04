/**
 * Chapter 2,Section 1,Test 2 队列
 * input: 6 3 1 7 5 8 9 2 4
 * output: 615947283
 */

#include <stdio.h>

struct queue
{
	int q[100];
	int head;
	int tail;
};

int main()
{
	struct queue q;
	q.head = 0;
	q.tail = 0;
	int i;
	for(i=0;i<9;i++){
		scanf("%d", &q.q[q.tail]);
		q.tail++;
	}

	while(q.head < q.tail){
		printf("%d",q.q[q.head]);
		q.head++;

		q.q[q.tail] = q.q[q.head];
		q.head++;
		q.tail++;
	}

	getchar();
	getchar();
	return 0;
}