#include<iostream>
#include <iomanip>
#include<stdio.h>
#include<cstdlib>
using namespace std;

int main()
{
	double m, V, p, a,b;
begin:cout << "���ܶ�������1" << "\n������������2" << "\n�����������3" <<"\n���㵥λ������4"<<"\n�������ʵ��ܶ�������5"<<"\n�˳�������0"<<"\n�����룺" ;
	cin >> a;
	if (a == 1)
	{

		cout << "����= ";
		cin >> m;
		cout << "���= ";
		cin >> V;
		cout << "�ܶ�=";
		printf("%.10e\n", m / V);
	}
	else if (a == 2)
	{
		cout << "�ܶ�= ";
		cin >> p;
		cout << "���= ";
		cin >> V;
		cout << "����=";;
		printf("%.10e\n", p * V);
	}
	else if (a == 3)
	{
		cout << "����= ";
		cin >> m;
		cout << "�ܶ�= ";
		cin >> p;
		cout << "���=";
		printf("%.10e\n", m / p);
	}
	else if (a == 4)
	{
		cout << "kg/m3�����g/cm3������1\ng/cm3�����kg/m3������2\n������: ";
		cin >> b;
		cout << "�������ܶ�: ";
		cin >> p;
		if (b == 1)
		{
			printf("%.10e\n", p/1e3);
		} 
		if(b==2)
		{
			printf("%.10e\n", p/1e-3);
		}  
	}
	else if(a==0)
	{
		cout<<"�ټ���"<<endl;
		exit(0); 
	}
	else cout<<"����������"<<endl; 
	cout<<"�㻹��ʲô��";
	goto begin;
	system("pause");
	return 0;
}
