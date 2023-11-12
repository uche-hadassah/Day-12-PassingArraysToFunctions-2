/*Name:Uche Hadassah
This program computes the average of a user given array and outputs both the array and the average*/
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
		if (array[sizeOfArr] == -1)//Breaks out if the sentinel is reached
		{
			break;
		}
		sizeOfArr++;
	} while (array[sizeOfArr] != -1 && sizeOfArr < MAX);
	cout << "The array is:";
	for (int i = 0; i < sizeOfArr; i++)//Outputs the array
	{
		cout << array[i]<<" ";
	}
	cout << "\nThe average is:"<< CalcAverage(array, sizeOfArr);//Calls the function
}
double CalcAverage(double arr[], int &size)
{
	double sum = 0;
	double avg;
	for (int j = 0; j < size; j++)
	{
		sum += arr[j];//adds the value in the array to sum
	}
	avg = sum / size;//Computes the average
	return avg;
}
