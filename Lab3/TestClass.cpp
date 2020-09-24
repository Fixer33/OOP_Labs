#include "TestClass.h"
TestClass::TestClass() : i(0)
{

}

TestClass TestClass::operator--(int)
{
	TestClass result = TestClass();
	result.i = i--;
	return result;
}

TestClass TestClass::operator--()
{
	TestClass result = TestClass();
	result.i = --i;
	return result;
}
