#include<iostream>
using namespace std;

class Date
{
private:
	int year,month,day;
	void SetSystemDate();
public:
	void init();
	int get_year(){return year;};
	int get_month(){return month;};
	int get_day(){return day;};
	void print_ymd();
	void print_mdy();
	bool IsLeapYear();
};