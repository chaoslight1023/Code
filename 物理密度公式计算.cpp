#include<iostream>
#include <iomanip>
#include<stdio.h>
using namespace std;

int main()
{
	double m, V, p, a;
	cout << "���ܶ�����1" << "\n����������2" << "\n���������3" << "\n�����룺" ;
	cin >> a;
	if (a == 1)
	{

		cout << "����= ";
		cin >> m;
		cout << "���= ";
		cin >> V;
		cout << "�ܶ�=";
		printf("%.10e\n", m/V);
	}
	else if (a == 2)
	{
		cout << "�ܶ�= ";
		cin >> p;
		cout << "���= ";
		cin >> V;
		cout << "����=";;
		printf("%.10e\n", p*V);
	}
	else if (a == 3)
	{
		cout << "����= ";
		cin >> m;
		cout << "�ܶ�= ";
		cin >> p;
		cout << "���=";
		printf("%.10e\n", m/p);
	}
	return 0;

}