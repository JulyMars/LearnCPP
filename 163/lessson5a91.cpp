#include<iostream>
using namespace std;

double maxThree(double a, double b, double c)
{
	double max;
	max = a>b?a:b;
	max = max>c?max:c;
	return max;
}

int main()
{
	double a,b,c;
	char yes;
	do
	{
		cin>>a>>b>>c;
		double max = maxThree(a,b,c);
		cout<<max<<endl;
		cout<<"continue(y/n)?"<<endl;
		cin>>yes;
	}while(yes=='Y'||yes=='y');
	return 0;
}