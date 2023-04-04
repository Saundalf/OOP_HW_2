#include "Libraries.hpp"
#include "Meotxe.hpp"
using namespace std;

Meotxe::Meotxe(int n, int m) : columns(n), rows(m)
{
	srand(time(0));
	for (int i = 0; i < columns; i++)
	{
		for (int j = 0; j < rows; j++)
			array[i][j] = 15 + rand() % 40;
	}
}

void Meotxe::print()
{
	for (int i = 0; i < columns; i++)
	{
		for (int j = 0; j < rows; j++)
			cout << array[i][j] << " ";

		cout << endl;
	}
	cout << endl;
}

void Meotxe::function()
{
	int minNum = INT_MAX;
	int colNum = 0;
	int rowNum = 0;

	for (int i = 0; i < columns; i++)
	{
		for (int j = 0; j < rows; j++)
		{
			if (minNum > array[i][j])
			{
				minNum = array[i][j];
				colNum = i;
				rowNum = j;
			}
		}
	}

	int reminder = 0;
	cout << "Indexes of the minElement in matrix is: " << colNum << " " << rowNum << endl;
	cout << "Min element in matrix is: " << minNum << endl;

	for (int i = 0; i < 3; i++)
	{
		int reminder = array[i][rowNum];
		array[i][rowNum] = array[i][1];
		array[i][1] = reminder;
	}
}
