#include<iostream>
using namespace std;
struct student//����ѧ���ṹ��
{
	string name;
	int score;
};
struct teacher//������ʦ�ṹ��
{
	string name;
	student stuarr[5];
};
void allocateSpace(teacher tearr[], int len);//������ֵ��ʦ�ĺ���
void printinfo(teacher tearr[], int len);//������ӡ��ʦ��Ϣ�ĺ���
int main()
{
	srand((unsigned int)time(NULL));
	teacher tearr[3];//����3����ʦ����
	//�ú�����3λ��ʦ��ֵ
	int len = sizeof(tearr) / sizeof(tearr[0]);
	//cout << len;
	allocateSpace(tearr, len);
	//��ӡ��ʦ��Ϣ
	printinfo(tearr, len);
	//
	system("pause");
	return 0;

}
void allocateSpace(teacher tearr[], int len)
{
	string nameseed = "ABCDE";
	for (int i = 0; i < len; i++)//��ֵ��ʦ
	{
		tearr[i].name = "Teacher_";
		tearr[i].name += nameseed[i];
		for (int j = 0; j < 5; j++)//��ֵѧ��
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
	for (int i = 0; i < len; i++)//��ӡ��ʦ��Ϣ
	{
		cout <<"��ʦ����:"<< tearr[i].name << endl;
		for (int j = 0; j < 5; j++)//��ӡѧ����Ϣ
		{
			cout << "\tѧ������:" << tearr[i].stuarr[j].name << " ѧ���ɼ�:" << tearr[i].stuarr[j].score << endl;
		}
	}
}
