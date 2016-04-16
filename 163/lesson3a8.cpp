#include<iostream>
#include<cmath>
using namespace std;

int main()
{
	int i,start,end,sum,n;
	int m,d;
	cin>>n;
	start = pow(10, n-1);
	end = pow(10,n);
	
	for(i=start;i<end;i++){
		m = i;
		sum = 0;
		while(m!=0)
		{
			d = m % 10;
			sum += pow(d, n);
			m = m / 10;
		}
		if(i == sum){
			cout<<i<<endl;
		}
	}
	return 0;
}
