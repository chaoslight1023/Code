#include<iostream>
#include <iomanip>
#include<stdio.h>
#include<cstdlib>
using namespace std;

int main()
{
	double m, V, p, a,b;
begin:cout << "���ܶ�������1" << "\n������������2" << "\n�����������3" <<"\n���㵥λ������4"<<"\n�������ʵ��ܶ�������5"<<"\n�˳�������0" ;
	cout<<"\n��ʾ��e�����ѧ��������10��e3=10��3�η���e-3=10��-3�η�"<<"\n�����룺";
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
	else if(a==5)
	{
		cout<<"\n����������������λ��kg/m3)"<<"���壺"<<"\n��:19.3e3"<<"\nǦ:11.3e3"<<"\n��:10.5e3"<<"\nͭ:8.9e3"<<"\n��,��:7.9e3"<<"\n��:2.7e3"<<"\n��,��:0.9e3";
		cout<<"\n����ľ:0.5e3"<<"\nҺ��:"<<"\nˮ��:13.6e3"<<"\n����:1.84e3"<<"\nˮ:1.0e3"<<"\nֲ����:0.9e3"<<"\nú��,�ƾ�:0.8e3"<<"\n����:0.71e3";
		cout<<"\n����"<<"\n������̼:1.98"<<"\n��:1.43"<<"\n����:1.29"<<"\nһ����̼:1.25"<<"\n��:0.18" <<"\n��:0.09"<<endl;
	} 
	else if(a==0)
	{
		cout<<"�ټ���"<<endl;
		exit(0); 
	}
	else cout<<"����������"<<endl; 
	cout<<"\n�㻹��ʲô��\n";
	goto begin;
	system("pause");
	return 0;
}
