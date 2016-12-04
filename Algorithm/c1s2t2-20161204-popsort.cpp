/**
 * Chapter 1,Section 2,Test 2 冒泡排序,结构体
 * input: 5
huhu 5 
haha 3
xixi 5
hengheng 2 
gaoshou 8
 * 
 * output: gaoshou huhu xixi haha hengheng
 */
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

	scanf("%d", &n);
	for(i=0;i<n;i++)
		scanf("%s %d", a[i].name, &a[i].score);

	printf("\nresult:\n");
	for(i=0;i<n-1;i++){
		for(j=0;j<n-i;j++){
			if(a[j].score < a[j+1].score){
				t = a[j];
				a[j] = a[j+1];
				a[j+1] = t;
			}
		}
	}

	for(i=0;i<n;i++){
		printf("%s, %d\n", a[i].name, a[i].score);
	}

	getchar();
	getchar();
	return 0;
}