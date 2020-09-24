#pragma once
class TestClass
{
private:
	int i;

public:
	TestClass();
	TestClass operator--(int);
	TestClass operator--();
};

