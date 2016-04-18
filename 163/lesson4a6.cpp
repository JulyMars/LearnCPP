#include<iostream>
using namespace std;
int main()
{
	int num=0,cap=0,little=0;
	int N = 101;
	char str[N];
	cin.getline(str, N);
	int i=0;
	while(str[i]!='\0')
	{
		if(str[i]>='A'&&str[i]<='Z')
			cap++;
		if(str[i]>='a'&&str[i]<='z')
			little++;
		if(str[i]>='0'&&str[i]<='9')
			num++;
		i++;
	}
	cout<<num<<' '<<cap<<' '<<little<<endl;

	return 0;
}