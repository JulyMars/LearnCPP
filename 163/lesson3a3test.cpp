#include<iostream>
using namespace std;

int main()
{
	float w;
	int a,b;
	cin>>b;

	// switch(w) //not integer
	// {
	// 	case 1.0:cout<<"1.0";
	// 	case 2.0:cout<<"2.0";
	// }

	switch(a)
	{
		case 1:cout<<"1";
		case 2:cout<<"2";
	}

	switch(b)
	{
		case 1:cout<<"1";
		default:cout<<"default";
		case 1+2:cout<<"3";
	}

	// switch(a+b)
	// {
	// 	case 3:cout<<"3";
	// 	case 1+2:cout<<"1+2";
	// 	default:cout<<"default;"
	// }
	return 0;
}