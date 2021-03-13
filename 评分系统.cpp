#include<iostream>
using namespace std; 
int main()
{
	int score;
	begin:
	cout << "(评分仅限于1-10）" << "\n请评分：";
	cin >> score;
	if (score>0)
	{
		if (score <= 10)
		{
			switch (score)
			{
			case 10:cout << "好评"; break;
			case 9:cout << "好评"; break;
			case 8:cout << "好评"; break;
			case 7:cout << "中等"; break;
			case 6:cout << "中等"; break;
			default:cout << "烂片"; break;
			}
		}
		else
		{
			cout << "请重新输入" << endl;
			goto begin;
		}
	}
	else
	{
		cout << "请重新输入" << endl;
		goto begin;
	}
	system("pause");
	return 0;
}