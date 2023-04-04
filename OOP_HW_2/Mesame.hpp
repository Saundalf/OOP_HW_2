#pragma once

class Mesame
{
public:
	Mesame(int m = 5, int n = 5);
	void print();
	void function();

private:
	const int rows;
	const int columns;
	int a[5][5];
};
