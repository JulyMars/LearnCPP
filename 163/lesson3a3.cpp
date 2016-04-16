#include<iostream>
using namespace std;

int main(int argc, char const *argv[])
{
	int new_grade,old_grade;
	cin>>old_grade;
	switch(old_grade/10)
	{
		case 10:
		case 9:
			new_grade = 5;
			break;
		case 8:
			new_grade = 4;
			break;
		case 7:
			new_grade = 3;
			break;
		case 6:
			new_grade = 2;
		default:
			new_grade = 1;
	}
	cout<<new_grade;
	return 0;
}
