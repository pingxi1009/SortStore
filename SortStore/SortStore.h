/*******************************************/
/*
	���ܣ�		���������㷨��ʵ�ֵ�һ�����˿�
	ʱ�䣺		2020-9-3 01:05
	�汾��		1.0
	���ߣ�		ƽϦ
	��ע��		��ʱֻ�� double �汾
	�ļ����ͣ�	.h�ļ�
*/
/*******************************************/


#pragma once
#include <stdlib.h>
#include <stdio.h>


/*********** ѡ������ ***********/
int SelecteSort(double *arr, int arrLenth);

/*********** ð������ ***********/
int BubbleSort(double *arr, int arrLenth);

/*********** �������� ***********/
int InsertSort(double *arr, int arrLenth);

/*********** ϣ������ ***********/
int ShellSort(double *arr, int arrLenth);

/***********  ������  ***********/
int HeapSort(double *arr, int arrLenth);
int HeapSort2(double *arr, int arrLenth);

/***********  �鲢����  ***********/
int MergeSort(double *arr, int arrLenth);


