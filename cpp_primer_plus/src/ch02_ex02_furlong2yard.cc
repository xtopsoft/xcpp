#include <iostream>

int main(int argc, char *argv[])
{
	using namespace std;

	double furlongs;

	cout << "How long from your home to school in furlongs :"; 
	cin >> furlongs;

	double yards = furlongs * 220;
	cout << "From your home to school is " << yards << " yards.\n";

	return 0;
}
