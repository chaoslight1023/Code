#include<iostream>
#include<math.h> 
using namespace std;
int main()
{
	int a,num = rand() % 100 + 1;
	while (1)
	{
		cout << "������һ������:";
		a = rand() % 100 + 1;
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

}
