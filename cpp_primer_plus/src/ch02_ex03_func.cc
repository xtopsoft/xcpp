#include <iostream>

void fun1();
void fun2();

int main(int argc, char *argv[])
{
	fun1();
	fun1();
	fun2();
	fun2();
	return 0;
}

void fun1()
{
	std::cout << "Three blind mice\n";
}

void fun2()
{
	std::cout << "See how they run\n";
}
