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

/*********** �������� ***********/
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

/*********** ϣ������ ***********/
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
				int temp = arr[i + increment];
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

/***********  ������  ***********/
int HeapSort(double *arr, int arrLenth)
{
	return 0;
}