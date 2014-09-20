#include "stdafx.h"
#include "Adder.h"

Adder::Adder(void)
{
}


Adder::~Adder(void)
{
}

int Adder::add()
{
	return Value::getInstance()->getValue() + Value::getInstance()->getValue();
}
