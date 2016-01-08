#include <stdio.h>
int main()
{
	int len=100;
	int a[len],i,j,t,n;

	for (i = 0; i < len; ++i)
	{
		a[i]=0;
	}

	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d",&t);
		a[t]++;
	}

	for(i=0;i<len-1;i++){
		for(j=i+1;j<len;j++){
			if(a[i]>a[j]){
				t=a[i];
				a[i]=a[j];
				a[j]=t;
			}
		}
	}

	for(i=0;i<len;i++){
		printf("%d ",a[i]);
	}

	getchar();
	getchar();
	return 0;
}