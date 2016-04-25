#include<iostream>
using namespace std;

int Abs(int x)
{
	return x>=0?x:-x;
}

double Abs(double x)
{
	return x>=0?x:-x;
}

int main()
{
	int a=-1;
	double b = 35.5;
	cout<<Abs(a)<<endl;
	cout<<Abs(b)<<endl;
	return 0;
}