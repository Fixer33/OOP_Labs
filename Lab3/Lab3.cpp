#include <iostream>
#include "TestClass.h"

using namespace std;
int main()
{
	int* arr = new int[2];
	arr[0] = 0;
	arr[1] = 10;
	TestClass ts = TestClass(11, arr);
	cout << ts--;
	cout << endl;
	cout << --ts;
	cout << endl;
	cout << --ts;

	int& elem = ts.GetElementPlusOne(1);
	cout << endl << elem;
}