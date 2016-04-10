#include<iostream>
#include<cmath>
using namespace std;
int main(int argc, char const *argv[])
{
	double sum,money,rate,years;
	cin>>money>>years>>rate;
	while(money>0){
		sum = money*pow((1+rate),years);
		cout<<sum<<endl;
		cin>>money>>years>>rate;
	}
	return 0;
}