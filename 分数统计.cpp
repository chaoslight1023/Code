#include<iostream>
using namespace std;
//考试成绩统计
/*
张三 语文：100 数学：100 英语：100
李四 语文：90 数学：50 英语：100
王五 语文：60 数学：70 英语：80
统计每个人的总分
*/
int main()
{
	int score[3][3]
	{
		{100,100,100},
		{90,50,100},
		{60,70,80}
	};//创建二维数组
	string names[3]{ "张三","李四","王五" };//打印姓名
	for (int i = 0; i < 3; i++)
	{
		int sum = 0;
		for (int j = 0; j < 3; j++)
		{
			sum += score[i][j];
			//cout << score[i][j] << ",";测试打印二维数组
		}
		cout << names[i] << "的总分为：" << sum << endl;
	}
	system("pause");
	return 0; 
}
