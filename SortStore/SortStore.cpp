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
	return 0;
}

/*********** 插入排序 ***********/
int InsertSore(double *arr, int arrLenth)
{
	return 0;
}

/*********** 希尔排序 ***********/
int ShellSort(double *arr, int arrLenth)
{
	return 0;
}

/***********  堆排序  ***********/
int HeapSort(double *arr, int arrLenth)
{
	return 0;
}