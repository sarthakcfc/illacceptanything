#include <iostream>
using namespace std;

void func(int howMany);

int main()
{

int theNumber;
cout << "How many times must it be said?\n";
cin >> theNumber;
func(theNumber);



return 0;
}


void func(int howMany)
{
	for(int i = 0; i < howMany; i++)
	{
		cout << "Get the func out of my face!\n";
	}
}
