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
	int temp;
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
	do 
	{
		increment = increment / 3;
		for (i = increment+1 ; i < arrLenth ; i = i + increment)
		{
			int temp = arr[i];
			if ()	// 还没搞好，还需要加深理解
			{
			}
			for (j = arrLenth - 1 ; j >= 0 && arr[j] > arr[i] ; )
			{
			}
		}


	} while (increment >0);

	return 0;
}

/***********  堆排序  ***********/
int HeapSort(double *arr, int arrLenth)
{
	return 0;
}