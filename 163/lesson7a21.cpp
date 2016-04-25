#include<iostream>
using namespace std;

void swap(int *xp, int *yp)
{
	int tmp;
	tmp = *xp;
	*xp = *yp;
	*yp = tmp;
}
int main()
{
	int a=2,b=3;
	cout<<"a: "<<a<<" b: "<<b<<endl;
	swap(&a, &b);
	cout<<"a: "<<a<<" b: "<<b<<endl;
	return 0;
}