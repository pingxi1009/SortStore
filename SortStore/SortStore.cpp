/*******************************************/
/*
���ܣ�		���������㷨��ʵ�ֵ�һ�����˿�
ʱ�䣺		2020-9-3 01:05
�汾��		1.0
���ߣ�		ƽϦ
��ע��		��ʱֻ�� double �汾
�ļ����ͣ�	.cpp�ļ�
*/
/*******************************************/


#include "SortStore.h"

/***** ���߽ӿڣ����������� *****/
void SwapNum(double& count1, double& count2)
{
	double temp = count1;
	count1 = count2;
	count2 = temp;
}

/*********** ѡ������ ***********/
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

/*********** ð������ ***********/
int BubbleSort(double *arr, int arrLenth)
{
	return 0;
}

/*********** �������� ***********/
int InsertSore(double *arr, int arrLenth)
{
	return 0;
}

/*********** ϣ������ ***********/
int ShellSort(double *arr, int arrLenth)
{
	return 0;
}

/***********  ������  ***********/
int HeapSort(double *arr, int arrLenth)
{
	return 0;
}