#include<iostream>
using namespace std;
void bubbleSort(int* arr, int len);
void printArray(int*arr, int len);
int main()
{
	int arr[] = { 4,3,6,9,1,2,10,8,7,5 };//��������
	int len = sizeof(arr) / sizeof(arr[0]);//��������Ԫ�ظ���
	bubbleSort(arr,len);//�����������ĭ����
	printArray(arr, len);
}
void bubbleSort(int* arr,int len)//��ĭ������
{
	for (int i = 0; i < len-1; i++)
	{
		for (int j = 0; j < len - i - 1; j++)
			if (arr[j] > arr[j + 1])
			{
				//���ǰ��һ�������ں���һ����������λ��
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
