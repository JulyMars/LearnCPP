#include <iostream>

class Point
{
private:
	int x, y;

public:
	Point(int x, int y)
	{
		this->x = x;
		this->y = y;
	}

	int getX()
	{
		return this->x;
	}

	int getY()
	{
		return this->y;
	}

	void add(Point &p)
	{
		add(p.x, p.y);
	}

	void add(int x, int y)
	{
		this->x += x;
		this->y += y;
	}

};

int main(int argc)
{
	Point p(1, 1);
	p.add(Point(2, 3));

	char *abc = new char[1];
	std::cin >> abc;
	return 0;
}