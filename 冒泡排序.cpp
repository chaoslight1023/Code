#include<iostream>
using namespace std;
//ð������
int main()
{
	//��������
	int arr[9] = { 4,2,8,0,5,7,1,3,9 };
	//���Ԫ�س�ʼ˳��
	cout << "Ԫ�س�ʼ˳��:";
	for (int i = 0; i < 9; i++)
	{
		cout << arr[i] << ",";
	}
	cout << endl;
	//ð������
	for (int i = 0; i < 9 - 1; i++)
	{
		for(int j=0;j<9-i-1;j++)
			if (arr[j] > arr[j + 1])
			{
				//���ǰ��һ�������ں���һ����������λ��
				int temp;
				temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
	}
	//���ð������Ԫ��
	cout << "ð�������Ԫ�أ�";
	for (int i = 0; i < 9; i++)
	{
		cout << arr[i] << ",";
	}
}