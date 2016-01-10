#include <stdio.h>
struct student
{
	char name[21];
	int score;
};
int main()
{
	struct student a[100],t;
	int i,j,n;

	scanf("%d",&n);
	for(i=0;i<n;i++)
		scanf("%s %d",&a[i].name,&a[i].score);
	
	for(i=0;i<n-1;i++){
		for(j=1;j<n-i;j++){
			if(a[i].score < a[j].score){
				t=a[i];
				a[i]=a[j];
				a[j]=t;
			}
		}
	}

	for(i=0;i<n;i++)
		printf("%s,\t%d\n",a[i].name,a[i].score);

	getchar();
	getchar();
	return 0;
}