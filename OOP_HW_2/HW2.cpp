#include "Libraries.hpp"
#include "Mesame.hpp"
#include "Meotxe.hpp"
#include "Mexute.hpp"

//pirveli normris funqciebi
int arithmeticSum(int* p_Array, int size);
unsigned long long geometricSum(int* p_Array, int size);
void pirveli();

//meore nomris funqciebi
void meore();
void sortByColumns(int* []);
void sortByRows(int* []);

int main()
{
	//Pirveli
	pirveli();
	
	//Meore


	//Mesame
	/*Mesame ob(5, 5);
	cout << "Initial matrix\n";
	ob.print();
	ob.function();
	cout << "Final matrix\n";
	ob.print();*/

	//Meotxe
	/*Meotxe ob(3, 3);
	ob.print();
	ob.function();
	ob.print();*/

	//Mexute
	/*Mexute ob(18);
	ob.print();
	ob.function();*/
}

void pirveli()
{
	int size = 15;
	int p_Array[15];
	srand(time(0));
	for (int i = 0; i < size; i++)
		*(p_Array + i) = rand();

	int ariSum = arithmeticSum(&p_Array[0], size);
	int geoSum = geometricSum(p_Array, size);

	cout << "Elements of the array are" << endl;
	for (int i = 0; i < size; i++)
		cout << *(p_Array + i) << " ";

	cout << endl;

	cout << "Arithmetic Sum = " << ariSum << endl;
	cout << "Geometric sum = " << geoSum << endl;
}

int arithmeticSum(int* p_Array, int size)
{
	int sum = 0;
	for (int i = 0; i < size; i++)
	{
		if (*(p_Array + i) % 2 == 0)
			sum += (*p_Array + i);
	}

	return sum / size;
}

unsigned long long geometricSum(int* p_Array, int size)
{
	unsigned long long mult = 1;
	for (int i = 0; i < size; i++)
	{
		if (*(p_Array + i) % 2 != 0)
			mult *= *(p_Array + i);
	}

	return mult / size;
}

void meore()
{
	int A[4][4];
	srand(time(0));
	for (int i = 0; i < 4; i++)
		for (int j = 0; j < 4; j++)
			A[i][j] = 10 + rand() + 80;


}

void sortByColumns(int* A[])
{
	for (int i = 1; i < 4; i++)
	{
		int reminder = 0;
		if (A[i][0] < A[i - 1][0])
		{
			reminder = A[i - 1][0];
			A[i - 1][0] = A[i][0];
			A[i][0] = reminder;
		}
	}
}

