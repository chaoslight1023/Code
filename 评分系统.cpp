#include<iostream>
using namespace std; 
int main()
{
	int score;
	begin:
	cout << "(���ֽ�����1-10��"<<"\n�˳�������0"  << "\n�����֣�";
	
	cin >> score;
	if (score>0)
	{
		if (score <= 10)
		{
			switch (score)
			{
			case 10:cout << "����"; break;
			case 9:cout << "����"; break;
			case 8:cout << "����"; break;
			case 7:cout << "�е�"; break;
			case 6:cout << "�е�"; break;
			default:cout << "��Ƭ"; break;
			}
		}
		else
		{
			cout << "����������" << endl;
			goto begin;
		}
	}
	else if(score==0)
	{
		exit(0);
	}
	else
	{
		cout << "����������" << endl;
		goto begin;
	}
	system("pause");
	return 0;
}
