#include<iostream>
using namespace std;
//Ԫ������
int main()
{
	//1.��������
	int arr[] = { 1,3,2,5,4 };
	//2.�������Ԫ��
	cout<<"����Ԫ��:";
	for (int i = 0; i < 5; i++)
		cout << arr[i] << ",";
	cout << endl;
	//3.������ʼԪ�غ�ĩβԪ��
	int start = 0;//��ʼԪ��
	int end = sizeof(arr) / sizeof(arr[0]) - 1;//ĩβԪ��
	/*cout << arr[start] << endl;
	cout << arr[end] << endl;*/
	//4.Ԫ������
	while (start < end)
	{
		int temp;
		temp = arr[start];
		arr[start] =arr [end];
		arr[end] = temp;
		start++;
		end--;
	}
	//5.�������Ԫ��
	cout << "����Ԫ��:";
	for (int i = 0; i < 5; i++)
		cout << arr[i] << ",";
	cout << endl;
	//�ֽ���------------------------
	system("pause");
	return 0;
}