#include<iostream>
using namespace std;

void swap(int *pa, int *pb)
{
	int t = *pa;
	*pa = *pb;
	*pb = t;
}

int main()
{
	int a,b,c;
	cin>>a>>b>>c;
	int *pa = &a;
	int *pb = &b;
	int *pc = &c;
	if(*pa > *pb)swap(pa, pb);
	if(*pa > *pc)swap(pa, pc);
	if(*pb > *pc)swap(pb, pc);
	cout<<a<<b<<c;
	return 0;
}