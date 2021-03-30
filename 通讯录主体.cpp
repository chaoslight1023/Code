#include<iostream>
using namespace std;
#define max 1000
void showmenu();//�����˵����ܺ���
struct person//������ϵ�˽ṹ��
{
	string m_name;//����
	int m_sex;//�Ա�:1�� 2Ů
	int m_age;//����
	string m_phone;//�绰
	string m_addr;//סַ
};
struct addressbooks//����ͨѶ¼�ṹ��
{
	person arr[max];//ͨѶ¼�б�������������
	int m_size;
};
void addperson(addressbooks* abs);//���������ϵ�˺���
void showperson(addressbooks* abs);//������ʾ��ϵ�˺���
int main()
{
	addressbooks abs;
	abs.m_size = 0;
	while (1)
	{
		showmenu();//���ò˵����ܺ���
		int select;
		cout << "����������:";
		cin >> select;
		switch (select)
		{
		case 1://1.�����ϵ��
			addperson(&abs);
			break;
		case 2://2.��ʾ��ϵ��
			showperson(&abs);
			break;
		case 3://3.ɾ����ϵ��
			break;
		case 4://4.������ϵ��
			break;
		case 5://5.�޸���ϵ��
			break;
		case 6://6.�����ϵ��
			break;
		case 0://0.�˳�ͨѶ¼
			cout << "��ӭ�´�ʹ��" << endl;
			system("pause");
			return 0;
			break;
		default:
			cout << "�޷�ʶ������������" << endl;//�������Ĳ���0123456,��ʾ����
			break;
		}
	}
	system("pause");
	return 0;
}
void showmenu()//����˵����ܺ���
{
	cout << "************************" << endl;
	cout << "***** 1.�����ϵ�� *****" << endl;
	cout << "***** 2.��ʾ��ϵ�� *****" << endl;
	cout << "***** 3.ɾ����ϵ�� *****" << endl;
	cout << "***** 4.������ϵ�� *****" << endl;
	cout << "***** 5.�޸���ϵ�� *****" << endl;
	cout << "***** 6.�����ϵ�� *****" << endl;
	cout << "***** 0.�˳�ͨѶ¼ *****" << endl;
	cout << "************************" << endl;
}
 void addperson(addressbooks* abs)//���������ϵ�˺���
{
	//�ж�ͨѶ¼�Ƿ�������������˾Ͳ������
	if (abs->m_size == max)
	{
		cout << "ͨѶ¼����,�޷���ӣ�" << endl;
		return ;
	}
	else
	{
		//��Ӿ�����ϵ��

		//����
		string name;
		cout << "����������:";
		cin >> name;
		cout << "\n";
		abs->arr[abs->m_size].m_name = name;
		//�Ա�
		cout << "�������Ա�:" << endl;
		cout << "1---�� 2---Ů" << endl;
		int sex = 0;
		while (1)
		{
			cin >> sex;
			if (sex == 1 || sex == 2)//��������ȷ���˳�
			{
				abs->arr[abs->m_size].m_sex = sex;
				break;
			}
			else//����������ȷ����������
			{
				cout << "�޷�ʶ��,����������" << endl;
			}

		}
		//����
		while (1)
		{
			cout << "����������:";
			int age;
			cin >> age;
			if (age < 0 || age>150)
			{
				cout << "����������" << endl;
			}
			else
			{ 
				abs->arr[abs->m_size].m_age = age;
				break;
			}
		}
		
		//�绰
		cout << "������绰:";
		string phone;
		cin >> phone;
		abs->arr[abs->m_size].m_phone = phone;
		//סַ
		cout << "�������ַ:";
		string addr;
		cin >> addr;
		abs->arr[abs->m_size].m_addr = addr;
		//����ͨѶ����
		abs->m_size++;
		cout << "��ӳɹ�" << endl;
		system("pause");
		system("cls");
	}
}
 void showperson(addressbooks *abs)
 {
	 if (abs->m_size == 0)//�����ϵ��Ϊ0����ʾ��¼Ϊ��
	 {
		 cout << "��¼Ϊ��" << endl;
	 }
	 else
	 {
		 for (int i = 0; i < abs->m_size; i++)
		 {
			 cout << "����:" << abs->arr[i].m_name << "\t";
			 cout << "�Ա�:" << (abs->arr[i].m_age == 1 ? "��" : "Ů") << "\t";
			 cout << " ����:" << abs->arr[i].m_age << "\t";
			 cout << " �绰:" << abs->arr[i].m_phone << "\t";
			 cout << " סַ:" << abs->arr[i].m_addr << "\t";
			 cout << endl;
		 }
	 }
	 system("pause");
	 system("cls"); 
 }