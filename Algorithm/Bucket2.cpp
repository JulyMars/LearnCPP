#include <stdio.h>
int main()
{
    int a[1001],i,j,t,n;

    for (i = 0; i < 1001; ++i)
        a[i]=0;
    
    printf("the number count: ");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&t);
        a[t]++;
    }

    for(i=0;i<1001;i++)
        for(j=0;j<a[i];j++)
            printf("%d ",i);

    printf("\n");
    getchar();

    return 0;
}