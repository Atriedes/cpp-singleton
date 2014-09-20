// practice.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include "Adder.h"

using namespace std;

Value *Value::instance = 0;

int _tmain(int argc, _TCHAR* argv[])
{
	Adder a;
	Value::getInstance()->setValue(10);
	cout << a.add()  << endl;
	system ("pause");
	return 0;
}

