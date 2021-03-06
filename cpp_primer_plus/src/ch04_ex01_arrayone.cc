#include <iostream>

int main()
{
    using namespace std;
    
    // 3 package yams
	int yams[3];
	yams[0] = 7;
	yams[1] = 8;
	yams[2] = 6;

	// yams price per package
	int yamcosts[] { 20, 30, 5 };

	// total yams
	cout << "Total yams = " << yams[0] + yams[1] + yams[2] << endl;

	// yam of second package price info
	cout << "The package with " << yams[1] << " yams costs " << yamcosts[1] << " cents per yam.\n";

	// total expense
	int total = yams[0] * yamcosts[0] + yams[1] * yamcosts[1] + yams[2] * yamcosts[2];
	cout << "The total yam expense is " << total << " cents.\n";

	// size
	cout << "\nSize of yams array = " << sizeof yams << " bytes.\n";
	cout << "\nSize of one element = " << sizeof yams[0] << " bytes.\n";

    return 0;
}