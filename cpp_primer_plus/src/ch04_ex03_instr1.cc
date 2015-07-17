#include <iostream>

int main()
{
    using namespace std;
    
	const int kArSize = 20;
	char name[kArSize];
	char dessert[kArSize];

	cout << "Enter your name:\n";
	cin >> name;
	cout << "Enter your favorite dessert:\n";
	cin >> dessert;
	cout << "I have some delicious " << dessert;
	cout << " for you, " << name << ".\n";
    
    return 0;
}