#include <stdio.h>
struct quence
{
	int data[100];
	int head;
	int tail;
};

int main()
{
	struct quence q;
	int i,n;
	q.head=0;
	q.tail=0;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d",&q.data[q.tail]);
		q.tail++;
	}

	while(q.head < q.tail)
	{
		printf("%d",q.data[q.head]);
		q.head++;
		q.data[q.tail]=q.data[q.head];
		q.head++;
		q.tail++;
	}

	getchar();getchar();

	return 0;
}