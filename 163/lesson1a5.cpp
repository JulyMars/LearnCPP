#include<iostream>
using namespace std;

int main(int argc, char const *argv[])
{
	//cin,以空格、tab、回车作为分隔符
	//cin.getline,以回车作为分隔符
	char name1[50],name2[50];
	cin.getline(name1, 50);
	cin.getline(name2, 50);
	cout<< "######################"<<endl;
	cout<< name1 <<endl;
	cout<<endl;
	cout<< "   Happy birthday to you!" <<endl;
	cout<<endl;
	cout<< "      " << name2 <<endl;
	cout<< "######################" <<endl;	return 0;
}
