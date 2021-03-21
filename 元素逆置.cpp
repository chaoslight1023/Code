#include<iostream>
using namespace std;
//元素逆置
int main()
{
	//1.定义数组
	int arr[] = { 1,3,2,5,4 };
	//2.输出所有元素
	cout<<"正序元素:";
	for (int i = 0; i < 5; i++)
		cout << arr[i] << ",";
	cout << endl;
	//3.定义起始元素和末尾元素
	int start = 0;//起始元素
	int end = sizeof(arr) / sizeof(arr[0]) - 1;//末尾元素
	/*cout << arr[start] << endl;
	cout << arr[end] << endl;*/
	//4.元素逆置
	while (start < end)
	{
		int temp;
		temp = arr[start];
		arr[start] =arr [end];
		arr[end] = temp;
		start++;
		end--;
	}
	//5.输出逆置元素
	cout << "逆置元素:";
	for (int i = 0; i < 5; i++)
		cout << arr[i] << ",";
	cout << endl;
	//分界线------------------------
	system("pause");
	return 0;
}