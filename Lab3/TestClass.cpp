#include "TestClass.h"
TestClass::TestClass() : i(0), arr(new int[0])
{
	
}

TestClass::TestClass(int val =, int* m) : i(val), arr(m)
{
	
}

TestClass::~TestClass()
{
	delete[] arr;
}

int TestClass::operator--(int)
{
	int res = i;
	i -= 1;
	return res;
}

int TestClass::operator--()
{
	this->i -= 1;
	return this->i;
}

int& TestClass::GetElementPlusOne(int index)
{
	arr[index]++;
	return arr[index];
}
