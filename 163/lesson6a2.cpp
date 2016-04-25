#include<iostream>
using namespace std;

int square(int i)
{
	return i*i;
}

int main()
{
	int sum=0;
	for(int i=1;i<=10;i++)
		sum+=square(i);
	cout<<"sum is: "<<sum<<endl;
	return 0;
}