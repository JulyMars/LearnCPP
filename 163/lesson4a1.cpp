#include<iostream>
using namespace std;
int main()
{
	char str[10];
	int i=0;
	cin>>str;
	while(str[i]!='\0')
	{
		str[i]-=32;
		i++;
	}
	cout<<str;
	return 0;
}