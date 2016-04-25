#include<iostream>
using namespace std;

int Sum(int a, int b)
{
	return a+b;
}

int Sum(int a, int b, int c)
{
	return a+b+c;
}

int main()
{
	cout<<Sum(1,2)<<endl;
	cout<<Sum(1,2,3)<<endl;
	return 0;
}