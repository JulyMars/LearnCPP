#include<iostream>
using namespace std;
int main()
{
	int a=5,*pta=&a;
	cout<<&a<<endl;
	cout<<a<<endl;
	cout<<pta<<endl;
	cout<<*pta<<endl;
	cout<<&pta<<endl;
	return 0;
}