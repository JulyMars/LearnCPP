#include <stdio.h>
int main()
{
	int a[100],i,j,t;
	scanf("%d",&t);
	for(i=0;i<t;i++)
		scanf("%d",&a[i]);
	
	for(i=0;i<100-1;i++){
		for(j=1;j<100-i;j++){
			t=a[i];
			a[i]=a[j];
			a[j]=t;
		}
	}

	for(i=0;i<100;i++){
		printf("%d ",a[i]);
	}

	getchar();getchar();
	return 0;
}