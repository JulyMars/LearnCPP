#include<iostream>
using namespace std;
int main()
{
	struct telelist{
		char name[8];
		char sex;
		char tele1[5];
		char tele2[5];
	}list1[3];

	for(int i=0;i<3;i++)
	{
		cin>>list1[i].name>>list1[i].sex>>list1[i].tele1>>list1[i].tele2;
	}
	for(int i=0;i<3;i++)
	{
		cout<<list1[i].name<<'/'<<list1[i].sex<<'/'<<list1[i].tele1<<'/'<<list1[i].tele2<<endl;
	}
	return 0;
}