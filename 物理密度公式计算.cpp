#include<iostream>
#include <iomanip>
#include<stdio.h>
#include<cstdlib>
using namespace std;

int main()
{
	double m, V, p, a,b;
begin:cout << "求密度请输入1" << "\n求质量请输入2" << "\n求体积请输入3" <<"\n换算单位请输入4"<<"\n常见物质的密度请输入5"<<"\n退出请输入0"<<"\n请输入：" ;
	cin >> a;
	if (a == 1)
	{

		cout << "质量= ";
		cin >> m;
		cout << "体积= ";
		cin >> V;
		cout << "密度=";
		printf("%.10e\n", m / V);
	}
	else if (a == 2)
	{
		cout << "密度= ";
		cin >> p;
		cout << "体积= ";
		cin >> V;
		cout << "质量=";;
		printf("%.10e\n", p * V);
	}
	else if (a == 3)
	{
		cout << "质量= ";
		cin >> m;
		cout << "密度= ";
		cin >> p;
		cout << "体积=";
		printf("%.10e\n", m / p);
	}
	else if (a == 4)
	{
		cout << "kg/m3换算成g/cm3请输入1\ng/cm3换算成kg/m3请输入2\n请输入: ";
		cin >> b;
		cout << "请输入密度: ";
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
		cout<<"再见！"<<endl;
		exit(0); 
	}
	else cout<<"请重新输入"<<endl; 
	cout<<"你还有什么事";
	goto begin;
	system("pause");
	return 0;
}
