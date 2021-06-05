#include<iostream>
#include <math.h>
const double EPS = 1e-6;

using namespace std;
#define g 10
#define noNull(a) (fabs(a) > EPS)
//�����ۺ����ü���
//1.����һ�����壬һ�������г� �� �� ����� ��� ���� �ܶ� ���� ѹ�� ѹǿ
class object
{
public:
	//��ó� �� �� ���ó� �� ��
	void setlength(double a)
	{
		length = a;
	}
	void setlength()
	{
		if (noNull(area) && noNull(width))
			length = area / width;
		else if (noNull(volume) && noNull(width) && noNull(hight))
			length = volume / (width * hight);
	}
	double getlength()
	{
		return length;
	}
	void setwidth(double a)
	{
		width = a;
	}
	double getwidth()
	{
		return width;
	}
	void sethight(double a)
	{
		hight = a;
	}
	double gethight()
	{
		return hight;
	}
	//��õ����
	void setarea(double a)
	{
		area = a;
	}
	void setarea()
	{
		if (noNull(length) && noNull(width))
			area = length * width;
		else if (noNull(volume) && noNull(hight))
			area = volume / hight;
	}
	double getarea()
	{
		return area;
	}
	//������� ������
	void setvolume(double a)
	{
		volume = a;
	}
	void setvolume()
	{
		if (noNull(length) && noNull(width) && noNull(hight))
			volume = length * width * hight;
		if (noNull(density) && noNull(quality))
			volume = density / quality;
	}
	double getvolume()
	{
		return volume;
	}
	//�������� �������
	void setquality(double a)
	{
		quality = a;
	}
	void setquality()
	{
		if (noNull(gravity) && noNull(g))
			quality = gravity / g;
		if (noNull(density) && noNull(volume))
			quality = density / volume;
	}
	double getquality()
	{
		return quality;
	}
private:
	double length = 0;//��
	double width = 0;//��
	double hight = 0;//��
	double area = 0;//�����
	double volume = 0;//���
	double quality = 0;//����
	double density = 0;//�ܶ�
	double gravity = 0;//����
	double pressure = 0;//ѹǿ
	double force = 0;//�ܶ�
};

int main()
{
	object a;
	a.setvolume(100);
	a.sethight(20);
	a.setwidth(5);
	a.setlength();
	cout << a.getlength() << endl;
}
