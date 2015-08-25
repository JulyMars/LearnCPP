#include <iostream>

class Point{
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

	void add(Point p)
	{
		add(p.x, p.y);
	}

	void add(int x, int y)
	{
		this->x += x;
		this->y += y;
	}

	void operator+=(Point p)
	{
		add(p);
	}

};

int main(int argc, char * argv[])
{

	Point p(10, 10);
	p.add(Point(1, 1));
	p += Point(2, 2);
	
	std::cout << p.getX() << "\n";
	std::cout << p.getY() << "\n";

	char * abc = new char[1];
	std::cin >> abc;
	return 0;
}