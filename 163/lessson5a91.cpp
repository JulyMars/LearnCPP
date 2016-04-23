#include<iostream>
using namespace std;

double maxValue(double a, double b)
{
	if(a>b)
		return a;
	else
		return b;
}

int main()
{
	double a,b,c;
	cin>>a>>b>>c;
	double max = maxValue(maxValue(a,b),c);
	cout<<max<<endl;
	return 0;
}