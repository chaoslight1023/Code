#include<iostream>
#include <math.h>
const double EPS = 1e-6;

using namespace std;
#define g 10
#define noNull(a) (fabs(a) > EPS)
//物理综合运用计算
//1.创建一个物体，一个物体有长 宽 高 底面积 体积 质量 密度 重力 压力 压强
class object
{
public:
	//获得长 宽 高 设置长 宽 高
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
	//获得底面积
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
	//设置体积 获得体积
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
	//设置质量 获得质量
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
	double length = 0;//长
	double width = 0;//宽
	double hight = 0;//高
	double area = 0;//底面积
	double volume = 0;//体积
	double quality = 0;//质量
	double density = 0;//密度
	double gravity = 0;//重力
	double pressure = 0;//压强
	double force = 0;//密度
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
