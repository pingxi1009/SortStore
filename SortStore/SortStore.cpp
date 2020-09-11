/*******************************************/
/*
功能：		各种排序算法的实现的一个个人库
时间：		2020-9-3 01:05
版本：		1.0
作者：		平夕
备注：		暂时只做 double 版本
文件类型：	.cpp文件
*/
/*******************************************/


#include "SortStore.h"

/***** 工具接口：交换两个数 *****/
void SwapNum(double& count1, double& count2)
{
	double temp = count1;
	count1 = count2;
	count2 = temp;
}

/*********** 选择排序 ***********/
int SelecteSort(double *arr, int arrLenth)
{
	int i, j;
	for (i = 0; i < arrLenth - 1; i++)
	{
		for (j = i + 1; j < arrLenth; j++)
		{
			if (arr[i] > arr[j])
			{
				SwapNum(arr[i], arr[j]);
			}
		}
	}

	return 0;
}

/*********** 冒泡排序 ***********/
int BubbleSort(double *arr, int arrLenth)
{
	int i, j;
	for (i = 0 ; i < arrLenth ; i++)
	{
		for (j = arrLenth - 1 - 1 ; j >= i ; j--)
		{
			if(arr[j] > arr[j+1])
				SwapNum(arr[j], arr[j+1]);
		}
	}

	return 0;
}

/*********** 插入排序 ***********/
int InsertSort(double *arr, int arrLenth)
{
	int i, j;
	double temp;
	for (i = 1 ; i < arrLenth ; i++)
	{
		if (arr[i-1] > arr[i])
		{
			temp = arr[i];
			for (j = i-1 ; j >=0 && arr[j] > temp; j--)
			{
				arr[j+1] = arr[j];
			}
			arr[j+1] = temp;
		}
	}

	return 0;
}

/*********** 希尔排序 ***********/
int ShellSort(double *arr, int arrLenth)
{
	int i, j;
	int increment = arrLenth;
	
	for (increment = increment / 3; increment >= 1; increment = increment / 3)
	{
		for (i = 0; i < arrLenth - increment; i++)
		{
			if (arr[i] > arr[i + increment])
			{
				double temp = arr[i + increment];
				for (j = i; j >= 0 && arr[j] > temp; j -= increment)
				{
					arr[j + increment] = arr[j];
				}
				arr[j + increment] = temp;
			}

		}
	}

	return 0;
}

/***********  堆排序  ***********/
void Swap(double &arr1, double &arr2)
{
	double temp = arr1;
	arr1 = arr2;
	arr2 = temp;
}

// 调整堆
int HeapAdjust(double *arr, int dad,int end)
{
	for (int son = 2 * dad + 1; son < end; son = 2 * dad + 1)
	{
		if (son + 1 < end && arr[son] < arr[son + 1])
			++son;
		if (arr[dad] > arr[son])
			return 0;
		Swap(arr[dad], arr[son]);
		dad = son;
	}

	return 0;
}

// 堆排序
int HeapSort(double *arr, int arrLenth)
{
	for (int i = arrLenth/2-1 ; i >=0 ; i--)
		HeapAdjust(arr, i, arrLenth);			// 建堆
	for (int i = arrLenth-1 ; i >=1 ; i--)
	{
		Swap(arr[0], arr[i]);
		HeapAdjust(arr, 0, i - 1);
	}

	return 0;
}

// 堆排序
// 交换
int lenth;
void Swap(double *arr, int i, int j)
{
	double temp = arr[i];
	arr[i] = arr[j];
	arr[j] = temp;
}

// 调整堆
void HeapIfy(double *arr, int i)
{
	int key = 2 * i + 1;
	if (key < lenth - 1 && arr[key] < arr[key + 1])
		key++;
	if (key < lenth && arr[key] > arr[i])
	{
		Swap(arr, i, key);
		HeapIfy(arr, key);
	}
}

// 建最大堆
void BuildMaxHeap(double *arr)
{
	if (lenth <= 0)
		return;
	for (int i = lenth / 2; i >= 0; i--)
	{
		HeapIfy(arr, i);
	}
}

// 开始排序
int HeapSort2(double *arr, int size)
{
	lenth = size;
	BuildMaxHeap(arr);
	for (int i = size - 1; i > 0; i--)
	{
		Swap(arr, 0, i);
		lenth--;
		HeapIfy(arr, 0);
	}
	return 0;
}