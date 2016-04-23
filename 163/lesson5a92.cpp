#include<iostream>
using namespace std;

int searchN(int a[], int n, int key)
{
	int low=0,high=n,middle;
	while(low<=high){
		middle = (low+high)/2;
		if(a[middle] == key)return middle;
		if(a[middle]>key)high=middle-1;
		else low=middle+1;
	}
	return -1;
}

int main()
{
	int a[] = {3,5,6,9,10,11,12,15,19,22,23,29,30,45,50,54};
	int k,x;
	char again='n';
	do
	{
		cin>>x;
		k = searchN(a, 18, x);
		cout<<"k: "<<k<<endl;
		cout<<"serach again(y/n)?"<<endl;
		cin>>again;
	}while(again=='y');
	return 0;
}