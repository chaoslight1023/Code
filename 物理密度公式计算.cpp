#include<iostream>
#include <iomanip>
#include<stdio.h>
using namespace std;

int main()
{
	double m, V, p, a;
	cout << "求密度输入1" << "\n求质量输入2" << "\n求体积输入3" << "\n请输入：" ;
	cin >> a;
	if (a == 1)
	{

		cout << "质量= ";
		cin >> m;
		cout << "体积= ";
		cin >> V;
		cout << "密度=";
		printf("%.10e\n", m/V);
	}
	else if (a == 2)
	{
		cout << "密度= ";
		cin >> p;
		cout << "体积= ";
		cin >> V;
		cout << "质量=";;
		printf("%.10e\n", p*V);
	}
	else if (a == 3)
	{
		cout << "质量= ";
		cin >> m;
		cout << "密度= ";
		cin >> p;
		cout << "体积=";
		printf("%.10e\n", m/p);
	}
	return 0;

}