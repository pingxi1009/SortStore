#include "SortStore.h"
#include <iostream>

using namespace std;

int main()
{
	// cout << "hello" << endl;
	cout << endl;
	cout << "-------------------------------------------------------------------------------------" << endl;
	cout << "                                               " << endl;
	// double arr[] = { 0, 5, 1.1, 4.3, 18, 9, 51, 103, -12.5, -21 };
	double arr[] = { 8, 1, 2, 5, 6, 4, 7, 9, 0, 3 };

	// ����Demo������ǰ
	cout << "Sort Befour:";
	for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++)
		printf("%7.1f", arr[i]);
	cout << endl;


	// ѡ������
	// SelecteSort(arr, sizeof(arr) / sizeof(arr[0]));
	// ��������
	// InsertSort(arr, sizeof(arr) / sizeof(arr[0]));
	// ð������
	// BubbleSort(arr, sizeof(arr) / sizeof(arr[0]));
	// ϣ������
	// ShellSort(arr, sizeof(arr) / sizeof(arr[0]));
	// ������
	// HeapSort(arr, sizeof(arr) / sizeof(arr[0]));
	// �鲢����
	MergeSort(arr, sizeof(arr) / sizeof(arr[0]));
	


	// ����Demo�������
	cout << "Sort  After:";
	for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++)
		printf("%7.1f", arr[i]);
	cout << endl;

	cout << "                                               " << endl;
	cout << "-------------------------------------------------------------------------------------" << endl;
	cout << endl;



	return 0;
}