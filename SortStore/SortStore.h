/*******************************************/
/*
	功能：		各种排序算法的实现的一个个人库
	时间：		2020-9-3 01:05
	版本：		1.0
	作者：		平夕
	备注：		暂时只做 double 版本
	文件类型：	.h文件
*/
/*******************************************/


#pragma once
#include <stdlib.h>
#include <stdio.h>


/*********** 选择排序 ***********/
int SelecteSort(double *arr, int arrLenth);

/*********** 冒泡排序 ***********/
int BubbleSort(double *arr, int arrLenth);

/*********** 插入排序 ***********/
int InsertSort(double *arr, int arrLenth);

/*********** 希尔排序 ***********/
int ShellSort(double *arr, int arrLenth);

/***********  堆排序  ***********/
int HeapSort(double *arr, int arrLenth);
int HeapSort2(double *arr, int arrLenth);

/***********  归并排序  ***********/
int MergeSort(double *arr, int arrLenth);


