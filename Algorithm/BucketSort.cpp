#include <stdio.h>
int main()
{
    int a[11],i,j,t;
    for(i=0;i<11;i++)
        a[i]=0;

    for(i=0;i<5;i++){
        scanf("%d",&t);
        a[t]++;
    }

    for(i=0;i<11;i++)
        for(j=0;j<a[i];j++)
            printf("%d ",i);
    printf("\n");

    for(i=10;i>=0;i--)
        for(j=0;j<a[i];j++)
            printf("%d ",i);
    printf("\n");

    getchar();
    return 0;
}