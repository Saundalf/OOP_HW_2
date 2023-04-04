#include "Libraries.hpp"
#include <cmath>
#include "Mexute.hpp"

Mexute::Mexute(int s) : size(s)
{
	srand(time(0));
	for (int i = 0; i < size; i++)
		*(p_Array + i)  = 15 + rand() % 35;
	
}

Mexute::~Mexute() {	 delete[] p_Array;	}

void Mexute::print()
{
	for (int i = 0; i < size; i++)
		cout << *(p_Array + i) << " ";
	cout << endl;
}

void Mexute::function()
{
	int sum = 0;
	for (int i = 0; i < size; i++)
	{
		sum += pow(*(p_Array + i), 2);
	}
	cout << sum;
}

