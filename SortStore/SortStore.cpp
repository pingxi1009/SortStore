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

/***********  ������  ***********/
void Swap(double &arr1, double &arr2)
{
	double temp = arr1;
	arr1 = arr2;
	arr2 = temp;
}

// ������
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

// ������
int HeapSort(double *arr, int arrLenth)
{
	for (int i = arrLenth/2-1 ; i >=0 ; i--)
		HeapAdjust(arr, i, arrLenth);			// ����
	for (int i = arrLenth-1 ; i >=1 ; i--)
	{
		Swap(arr[0], arr[i]);
		HeapAdjust(arr, 0, i - 1);
	}

	return 0;
}

// ������
// ����
int lenth;
void Swap(double *arr, int i, int j)
{
	double temp = arr[i];
	arr[i] = arr[j];
	arr[j] = temp;
}

// ������
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

// ������
void BuildMaxHeap(double *arr)
{
	if (lenth <= 0)
		return;
	for (int i = lenth / 2; i >= 0; i--)
	{
		HeapIfy(arr, i);
	}
}

// ��ʼ����
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

/***********  �鲢����  ***********/
/******** ǧ��ע��߽����� ********/
int Merge(double *SR, double *TR, int i, int m, int n, int arrMaxLenth)
{
	int j, k, e;
	for (j = m+1 , k = i ; i <= m && j <= n ; k++)
	{
		if (SR[i] > SR[j] && j < arrMaxLenth)
			TR[k] = SR[j++];
		else
			TR[k] = SR[i++];
	}
	if (i <= m)
	{
		for (e = 0 ; e <= m - i ; e++, k++)
			TR[k] = SR[i + e];
	}
	if (j <= n && j < arrMaxLenth)
	{
		for (e = 0 ; e <= n - j ; e++, k++)
			TR[k] = SR[j + e];
	}

	return 0;
}

int MSort(double *SR, double *TR1, int s, int t, int arrMaxLenth)
{
	int m;
	if (s == t && t < arrMaxLenth)
		TR1[s] = SR[s];
	else if(t > s)
	{
		double *TR2 = new double[t+1];		// ���붨�����飬�������鶨���ǳ��ȱ����ǳ��������Բο����ѵ�����һ���ڴ�
		m = (s + t) / 2;
		MSort(SR, TR2, s, m, arrMaxLenth);
		MSort(SR, TR2, m + 1, t, arrMaxLenth);
		Merge(TR2, TR1, s, m, t, arrMaxLenth);
	}
	
	// delete[] TR2;
	return 0;
}


int MergeSort(double *arr, int arrLenth)
{
	double *TR = new double[arrLenth];
	MSort(arr, TR, 0, arrLenth, arrLenth);

	// ��TR������Ļ���arr��
	int i;
	for (i = 0; i < arrLenth; i++)
	{
		arr[i] = TR[i];
	}

	return 0;
}