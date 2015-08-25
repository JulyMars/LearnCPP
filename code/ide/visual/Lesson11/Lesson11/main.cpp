#include <iostream>

void hello()
{

}

class Hello{
public:
	void operator()()
	{
		printf("say hello\n");
	}
};

int main(int argc, char * argv[])
{
	Hello h;
	h();

	char *abc = new char[1];
	std::cin >> abc;
}