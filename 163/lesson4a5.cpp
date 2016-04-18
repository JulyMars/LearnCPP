#include<iostream>
using namespace std;
int main()
{
	int N,i,j;
	double a[100];
	cin>>N;
	for(i=0;i<N;i++)
	{
		cin>>a[i];
	}
	for(i=0;i<N-1;i++)
	{
		for(j=0;j<N-1-i;j++)
		{
			if(a[j]>a[j+1])
			{
				int tmp = a[j];
				a[j] = a[j+1];
				a[j+1]=tmp;
			}
		}
	}
	for(i=0;i<N;i++)
	{
		cout<<a[i]<<" ";
	}
	cout<<endl;
	return 0;
}