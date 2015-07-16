#include <iostream>

struct date
{
	int year;
	int month;
	int day;
};

int main()
{
	date d1, d2, d3;
	d1.year = 2000;

	date *pd = &d2;
	pd->year = 2001;

	date trio[3];
	trio[0].year = 2002;

	std::cout << trio->year << std::endl;

	const date *datep[3] = {&d1, &d2, &d3};
	std::cout << datep[1]->year << std::endl;

	datep[0]->year=2008;

	return 0;
}
