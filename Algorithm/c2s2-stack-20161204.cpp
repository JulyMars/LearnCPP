/**
 * Chapter 2,Section 2 堆栈
input: 12321
output: YES

input: 123321
output: YES

input: abc
output: NO
 */
#include <stdio.h>
#include <string.h>
#include <math.h>

int main()
{
	char a[100],s[100];
	int i,len,mid,top,next;

	gets(a);
	len = strlen(a);
	mid = floor(len/2);
	next = ceil(len/2.0);

	top=-1;
	for(i=0;i<mid;i++){
		top++;
		s[top] = a[i];
	}

	for(i=next;i<len;i++){
		if(a[i] != s[top])
			break;
		top--;
	}

	if(top == -1)
		printf("YES\n");
	else
		printf("NO\n");

	return 0;
}