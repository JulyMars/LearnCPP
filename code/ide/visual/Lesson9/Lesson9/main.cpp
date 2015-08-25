#include <iostream>

class Hello{
public:
	void sayHello()
	{
		printf("Hello World!\n");
	}

	void sayHello(char *name)
	{
		printf("Hello %s\n", name);
	}
};

int main(int argc, const char * argv[])
{
	Hello *h = new Hello();
	h->sayHello();

	std::string name = "zhangSan";

	h->sayHello((char*)name.c_str());

	char * abc = new char[5];
	std::cin >> abc;
	return 0;
}