#include<iostream>
using namespace std;

int s;

void move(char a, char b)
{
	cout<<a<<" -> "<<b<<endl;
	s++;
}

void hanoi(int n, char a, char b, char c)
{
	if(n==1)
		move(a,c);
	else{
		hanoi(n-1,a,c,b);
		move(a,c);
		hanoi(n-1,b,a,c);
	}
}

int main()
{
	int m;
	s = 0;
	cout<<"Please input num:";
	cin>>m;
	cout<<"The process is:"<<endl;
	hanoi(m,'A','B','C');
	cout<<"move num: "<<s<<endl;
	return 0;
}