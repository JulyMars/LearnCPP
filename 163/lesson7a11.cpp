#include<iostream>
using namespace std;
int main()
{
	int a=5,*pta=&a;
	*pta=a+8;
	cout<<"a: "<<a<<" pta: "<<*pta<<endl;
	return 0;
}