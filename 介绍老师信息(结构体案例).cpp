#include<iostream>
using namespace std;
struct student//定义学生结构体
{
	string name;
	int score;
};
struct teacher//定义老师结构体
{
	string name;
	student stuarr[5];
};
void allocateSpace(teacher tearr[], int len);//声明赋值老师的函数
void printinfo(teacher tearr[], int len);//声明打印老师信息的函数
int main()
{
	srand((unsigned int)time(NULL));
	teacher tearr[3];//创建3名老师数组
	//用函数给3位老师赋值
	int len = sizeof(tearr) / sizeof(tearr[0]);
	//cout << len;
	allocateSpace(tearr, len);
	//打印老师信息
	printinfo(tearr, len);
	//
	system("pause");
	return 0;

}
void allocateSpace(teacher tearr[], int len)
{
	string nameseed = "ABCDE";
	for (int i = 0; i < len; i++)//赋值老师
	{
		tearr[i].name = "Teacher_";
		tearr[i].name += nameseed[i];
		for (int j = 0; j < 5; j++)//赋值学生
		{
			tearr[i].stuarr[j].name = "Student_";
			tearr[i].stuarr[j].name += nameseed[j];
			int random = rand() % 61+40;//40~100
			tearr[i].stuarr[j].score = random;
		}
	}
}
void printinfo(teacher tearr[], int len)
{
	for (int i = 0; i < len; i++)//打印老师信息
	{
		cout <<"老师姓名:"<< tearr[i].name << endl;
		for (int j = 0; j < 5; j++)//打印学生信息
		{
			cout << "\t学生姓名:" << tearr[i].stuarr[j].name << " 学生成绩:" << tearr[i].stuarr[j].score << endl;
		}
	}
}
