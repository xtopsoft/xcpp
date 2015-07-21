/**
 * println("The current value of friendlyWelcome is $(friendlyWelcome)");
 * -->
 * cout<<"The current value of friendlyWelcome is "<<friendlyWelcome<<""<<endl;
 */
// #include <iostream>

#define p(v) cout<<(v)<<endl

int main()
{
    using namespace std;
    
	int x = 100;

	p("x is $(x)");
    
    return 0;
}