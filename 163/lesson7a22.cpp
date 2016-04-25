#include<iostream>
using namespace std;

double faver(int a[],int n,int *max, int *min)
{
	int aver = a[0];
	*max = *min = a[0];
	for(int i=1;i<n;i++)
	{
		aver+=a[i];
		if(a[i]>*max)*max=a[i];
		if(a[i]<*min)*min=a[i];
	}
	return aver / n;
}
int main()
{
	int a[] = {80,89,67,76,98},n=5,max,min;
	double aver = faver(a, n, &max, &min);
	cout<<"aver: "<<aver<<" max: "<<max<<" min: "<<min<<endl;
	return 0;
}