#include <stdio.h>

int main()
{
	int a[100],i,j,t,n;
	for(i=0;i<100;i++)
		a[i]=0;

	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d",&t);
		a[t]++;
	}

	for(i=0;i<100-1;i++){
		for(j=1;j<100-i-1;j++){
			if(a[i]<a[j]){
				t=a[i];
				a[i]=a[j];
				a[j]=t;
			}
		}
	}

	for(i=0;i<100;i++){
		printf("%d ",a[i]);
	}

	getchar();

	return 0;
}