/*Write a function called CalcAverage that takes as parameters an array of doubles and 
the array size as integer, and returns the average of the array (of type double). 
Write a main program to test your function by reading the array from the user (-1 to 
signal end of input). The program should output the array and the average.*/
#include<iostream>
using namespace std;
const int MAX = 100;
double CalcAverage(double[], int&);
int main()
{
	double array[MAX];
	int sizeOfArr = 0;
	cout << "Enter the numbers(-1 to end):";
	do
	{
		cin >> array[sizeOfArr];
		if (array[sizeOfArr] == -1)
		{
			break;
		}
		sizeOfArr++;
	} while (array[sizeOfArr] != -1 && sizeOfArr < MAX);
}
double CalcAverage(double arr[], int &size)
{
	double sum = 0;
	double avg = sum / size;


	return avg;
}
