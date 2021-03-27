#include<iostream>
using namespace std;
int main()
{
	srand((unsigned int)time(NULL));
	int a,num = rand() % 100 + 1;
	while (1)
	{
		cout << "请输入一个数字:";
		cin >> a;
		if (a > num)
		{
			cout << "猜测数目过大\n";
		}
		else if (a < num)
		{
			cout << "猜测数目过小\n";
		}
		else
		{
			cout << "恭喜您猜对了";
			break;
		}
	}
	system("pause");
	return 0;

}
