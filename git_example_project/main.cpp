#include <iostream>

using std::cout;
using std::endl;
using std::cin;

int main()
{
	cout << "Hello, World!" << endl;
	cout << "Press Enter to continue...";
	for (size_t i = 0; i < 10; i++)
	{
		cout << &i << endl;
	}
	cin.get();
	return 0;
}