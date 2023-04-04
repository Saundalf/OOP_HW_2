#include "Libraries.hpp"
#include "Mesame.hpp"
using namespace std;

Mesame::Mesame(int m, int n) : rows(m), columns(n)
{
	srand(time(0));
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < columns; j++)
			a[i][j] = 10 + rand() % 90;
	}
}

void Mesame::print()
{
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < columns; j++)
			cout << a[i][j] << " ";

		cout << endl;
	}
}

void Mesame::function()
{
	int findMax = INT_MIN;
	int maxNumRow = 0;
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < columns; j++)
		{
			if (findMax < a[i][j])
			{
				findMax = a[i][j];
				maxNumRow = i;

			}
		}
	}
	int reminder = 0;
	cout << "MaxNumIndex: " << maxNumRow << endl;
	cout << "MaxNum" << findMax << endl;
	for (int j = 0; j < columns; j++)
	{
		int reminder = a[maxNumRow][j];
		a[maxNumRow][j] = a[3][j];
		a[3][j] = reminder;
	}
}
