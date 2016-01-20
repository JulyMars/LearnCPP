#include <stdio.h>
//10
//8 100 50 22 15 6 1 1000 999 0

//1000 999 100 50 22 15 8 6 1 0
int main()
{
    

    int book[1001],i,n,t;
    for(i=0;i<1001;i++)
        book[i]=0;

    scanf("%d", &n);

    for(i=0;i<n;i++){
        scanf("%d",&t);
        book[t]++;
    }
    
    for(i=0;i<1001;i++){
        if(book[i]!=0)
            printf("%d ",i);
    }

    getchar();
    getchar();

    return 0;
}