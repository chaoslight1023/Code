#include<iostream>
using namespace std;
//���Գɼ�ͳ��
/*
���� ���ģ�100 ��ѧ��100 Ӣ�100
���� ���ģ�90 ��ѧ��50 Ӣ�100
���� ���ģ�60 ��ѧ��70 Ӣ�80
ͳ��ÿ���˵��ܷ�
*/
int main()
{
	int score[3][3]
	{
		{100,100,100},
		{90,50,100},
		{60,70,80}
	};//������ά����
	string names[3]{ "����","����","����" };//��ӡ����
	for (int i = 0; i < 3; i++)
	{
		int sum = 0;
		for (int j = 0; j < 3; j++)
		{
			sum += score[i][j];
			//cout << score[i][j] << ",";���Դ�ӡ��ά����
		}
		cout << names[i] << "���ܷ�Ϊ��" << sum << endl;
	}
	system("pause");
	return 0; 
}
