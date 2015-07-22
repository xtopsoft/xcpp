#include <iostream>

int main()
{
	using namespace std;
	
	double celsius;
	double fahrenheit;
    
	cout << "Please enter a Celsius Value: ";
	cin >> celsius;
	fahrenheit = celsius * 1.8 + 32.0;
	cout << celsius << " degrees Celsius is " << fahrenheit << " degrees Fahrenheit.\n";
    
    return 0;
}