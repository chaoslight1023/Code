#include<iostream>
using namespace std;
int main()
{
	srand((unsigned int)time(NULL));
	int a,num = rand() % 100 + 1;
	while (1)
	{
		cout << "������һ������:";
		cin >> a;
		if (a > num)
		{
			cout << "�²���Ŀ����\n";
		}
		else if (a < num)
		{
			cout << "�²���Ŀ��С\n";
		}
		else
		{
			cout << "��ϲ���¶���";
			break;
		}
	}
	system("pause");
	return 0;

}
