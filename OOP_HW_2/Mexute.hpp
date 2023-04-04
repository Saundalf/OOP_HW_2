#pragma once

class Mexute
{
public:
	Mexute(int s = 18);
	~Mexute();
	void print();
	void function();

private:
	const int size;
	int* p_Array = new int[size];
};
