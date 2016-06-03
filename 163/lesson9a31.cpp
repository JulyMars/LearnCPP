#include<iostream>
#include<windows.h>
using namespace std;

class Clock{
private:
	int Hour,Minute,Second,Prize;
public:
	void Set(int h,int m,int s,int p);
	void Run();
	void ShowTime();
	void ReportTime();
};

void Clock::Set(int h,int m,int s,int pr)
{
	Hour = h;
	Minute = m;
	Second = s;
	Prize = pr;
}

void Clock::ShowTime()
{
	cout<<Hour<<":"<<Minute<<":"<<Second;
}

void Clock::Run()
{
	for (int i = 0; i < 10; ++i)
	{
		Second++;
		if (Second == 60)
		{
			Second = 0;
			Minute++;
		}
		if (Minute == 60)
		{
			Minute = 0;
			Hour++;
		}
		if (Hour == 24)
		{
			Hour = 0;
		}
		cout<<"\r                \r";
		ShowTime();
		Sleep(1000);
	}
}

void Clock::ReportTime()
{
	if(Minute==0&&Second==0)
	{
		for (int i = 0; i < Hour; ++i)
		{
			cout<<'\007';
			Sleep(1000);
		}
	}
}

int main()
{
	Clock Ben;
	Ben.Set(5,59,50,0);
	Ben.ShowTime();
	Ben.Run();
	Ben.ReportTime();
	return 0;
}