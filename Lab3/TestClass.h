#pragma once
class TestClass
{
private:
	int i;
	int* arr;

public:
	TestClass();
	TestClass(int val, int* m);
	~TestClass();
	int operator--(int);
	int operator--();
	int& GetElementPlusOne(int index);
};

