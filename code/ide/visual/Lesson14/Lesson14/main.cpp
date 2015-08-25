#include <iostream>

class A
{
	friend class B;
private:
	int num;

public:
	A()
	{
		this->num = 10;
	}

	int getNum()
	{
		return this->num;
	}
};

class B :public A
{
public:
	B()
	{
		printf("num is %d\n", num);
	}
};

int main()
{
	B b;

	char* abc = new char[1];
	std::cin >> abc;
	return 0;
}