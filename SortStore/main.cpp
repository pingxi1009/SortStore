#include "SortStore.h"
#include <iostream>

using namespace std;

int main()
{
	cout << "hello" << endl;

	double arr[] = { 0, 5, 1.1, 4.3, 18, 9, 51, 103, -12.5, -21 };

	// ²âÊÔDemo£ºÅÅÐòÇ°
	cout << "Sort Befour:";
	for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++)
		printf("%7.1f", arr[i]);
	cout << endl;


	// Ñ¡ÔñÅÅÐò
	// SelecteSort(arr, sizeof(arr) / sizeof(arr[0]));
	// ²åÈëÅÅÐò
	// InsertSort(arr, sizeof(arr) / sizeof(arr[0]));
	// Ã°ÅÝÅÅÐò
	// BubbleSort(arr, sizeof(arr) / sizeof(arr[0]));
	// Ï£¶ûÅÅÐò
	ShellSort(arr, sizeof(arr) / sizeof(arr[0]));
	


	// ²âÊÔDemo£ºÅÅÐòºó
	cout << "Sort  After:";
	for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++)
		printf("%7.1f", arr[i]);
	cout << endl;


	return 0;
}