#pragma once
class Value
{
private:
	static Value *instance;

protected:
	int val;
	Value(void);
	~Value(void);

public:
	static Value *getInstance()
	{
		if (!instance)
			instance = new Value;
		return instance;
	}

	void Value::setValue(int v)
	{
		val = v;
	}

	int Value::getValue()
	{
		return val;
	}
};

