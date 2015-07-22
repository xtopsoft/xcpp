#include <iostream>

int main()
{
	double light_year;
	double astronomical;

    using namespace std;
    
	cout << "Enter the number of light years: ";
	cin >> light_year;
	astronomical = light_year * 63240;
	cout << light_year << " light years = " << astronomical << " astronomical units.\n";

    return 0;
}