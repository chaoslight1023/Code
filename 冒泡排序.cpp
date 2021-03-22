#include<iostream>
using namespace std;
//冒泡排序
int main()
{
	//定义数组
	int arr[9] = { 4,2,8,0,5,7,1,3,9 };
	//输出元素初始顺序
	cout << "元素初始顺序:";
	for (int i = 0; i < 9; i++)
	{
		cout << arr[i] << ",";
	}
	cout << endl;
	//冒泡排序
	for (int i = 0; i < 9 - 1; i++)
	{
		for(int j=0;j<9-i-1;j++)
			if (arr[j] > arr[j + 1])
			{
				//如果前面一个数大于后面一个数，调换位置
				int temp;
				temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
	}
	//输出冒泡排序元素
	cout << "冒泡排序的元素：";
	for (int i = 0; i < 9; i++)
	{
		cout << arr[i] << ",";
	}
	system("pause");
	return 0; 
}
