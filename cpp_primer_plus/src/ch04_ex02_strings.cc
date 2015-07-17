#include <iostream>
#include <cstring>

int main()
{
    using namespace std;
    
	const int kNameLength = 15;
	char name1[kNameLength];
	char name2[kNameLength] = "C++owBoy";

	cout << "Howdy! I'm " << name2;
	cout << "What's your name?\n";
	cin >> name1;
	cout << "Well, " << name1 << ", your name has " << strlen(name1) << " letters and is stored\n";
	cout << "in array of " << sizeof name1 << " bytes.\n";

	cout << "Your initial is " << name1[0] << endl;

	name2[3] = '\0';
	cout << "Here are the first 3 characters of my name: " << name2 << endl;
    
    return 0;
}