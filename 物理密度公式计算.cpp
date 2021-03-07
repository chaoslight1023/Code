#include<iostream>
#include <iomanip>
#include<stdio.h>
#include<cstdlib>
using namespace std;

int main()
{
	double m, V, p, a,b;
begin:cout << "求密度请输入1" << "\n求质量请输入2" << "\n求体积请输入3" <<"\n换算单位请输入4"<<"\n常见物质的密度请输入5"<<"\n退出请输入0" ;
	cout<<"\n提示：e代表科学计数法的10，e3=10的3次方，e-3=10的-3次方"<<"\n请输入：";
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
	else if(a==5)
	{
		cout<<"\n常见物体质量（单位：kg/m3)"<<"固体："<<"\n金:19.3e3"<<"\n铅:11.3e3"<<"\n银:10.5e3"<<"\n铜:8.9e3"<<"\n钢,铁:7.9e3"<<"\n铝:2.7e3"<<"\n冰,蜡:0.9e3";
		cout<<"\n干松木:0.5e3"<<"\n液体:"<<"\n水银:13.6e3"<<"\n硫酸:1.84e3"<<"\n水:1.0e3"<<"\n植物油:0.9e3"<<"\n煤油,酒精:0.8e3"<<"\n汽油:0.71e3";
		cout<<"\n气体"<<"\n二氧化碳:1.98"<<"\n氧:1.43"<<"\n空气:1.29"<<"\n一氧化碳:1.25"<<"\n氦:0.18" <<"\n氢:0.09"<<endl;
	} 
	else if(a==0)
	{
		cout<<"再见！"<<endl;
		exit(0); 
	}
	else cout<<"请重新输入"<<endl; 
	cout<<"\n你还有什么事\n";
	goto begin;
	system("pause");
	return 0;
}
