#include<iostream>
#include<stdio.h>
using namespace std;
//压强计算1.0
void showmenu();//声明主菜单函数
int pressure(double F, double s);//声明计算压强函数
int force(double p, double s);//声明计算压力函数
int square(double p, double F);//声明计算受力面积函数
void exponent(double a);//声明科学记数法函数
int main()
{
	double F, s, p;
	while (1)
	{
		showmenu();//使用主菜单函数
		int select;
		cout << "请输入数字: ";
		cin >> select;
		cout << endl;
		system("cls");
		switch (select)
		{
		case 1://1.求压强
			cout << "请输入压力(F/N):";
			cin >> F;
			cout << "请输入受力面积(s/m2):";
			cin >> s;
			p = pressure(F, s);
			exponent(p);
			system("pause");
			system("cls");
			break;
		case 2://2.求压力
			cout << "请输入压强(p/Pa):";
			cin >> p;
			cout << "请输入受力面积(s/m2):";
			cin >> s;
			F = force(p, s);
			exponent(F);
			system("pause");
			system("cls");
			break;
		case 3://3.受力面积
			cout << "请输入压力(F/N):";
			cin >> F;
			cout << "请输入压强(p/Pa):";
			cin >> p;
			s = square(F,p);
			exponent(s);
			system("pause");
			system("cls");
			break;
		case 0://0.退出
			cout << "欢迎下次使用，再见！" << endl;
			system("pause");
			return 0;
			break;
		default:
			cout << "无法识别，请重新输入" << endl;
			system("pause");
			system("cls");
			break;
		}
	}
}
void showmenu()//定义主菜单函数
{
	cout << "**************************\t" << endl;
	cout << "*****1.计算压强***********\t" << endl;
	cout << "*****2.计算压力***********\t" << endl;
	cout << "*****3.计算受力面积*******\t" << endl;
	cout << "*****4.敬请期待...********\t" << endl;
	cout << "*****0.退出程序***********\t" << endl;
	cout << "**************************\t" << endl;
}
int pressure(double F, double s)//定义计算压强函数
{
	double p;
	p = F / s;
	return p;
}
int force(double p, double s)//定义计算压力函数
{
	double F;
	F = p * s;
	return F;
}
int square(double F, double p)//定义计算受力面积函数
{
	double s;
	s = F / p;
	return s;
}
void exponent(double a)//定义科学计数法函数
{
	while (1)
	{
		cout << "是否要换算成科学记数法形式？" << endl;
		cout << "1.是   2.否" << endl;
		cout << "请输入:";
		int num;
		cin >> num;
		if (num == 1)
		{
			printf("原式=%e\n", a);
			break;
		}
		else if (num == 2)
		{
			cout << "原始=" << a << endl;
			break;
		}
		else cout << "无法识别，请重新输入" << endl;
	}
}