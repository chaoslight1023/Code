#include<iostream>
using namespace std;
void bubbleSort(int* arr, int len);
void printArray(int*arr, int len);
int main()
{
	int arr[] = { 4,3,6,9,1,2,10,8,7,5 };//创建数组
	int len = sizeof(arr) / sizeof(arr[0]);//求出数组的元素个数
	bubbleSort(arr,len);//将数组进行泡沫排序
	printArray(arr, len);
}
void bubbleSort(int* arr,int len)//泡沫排序函数
{
	for (int i = 0; i < len-1; i++)
	{
		for (int j = 0; j < len - i - 1; j++)
			if (arr[j] > arr[j + 1])
			{
				//如果前面一个数大于后面一个数，调换位置
				int temp;
				temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
	}
}
void printArray(int* arr, int len)
{
	for (int i = 0; i < len; i++)
	{
		cout << arr[i] << ",";
	}
}
