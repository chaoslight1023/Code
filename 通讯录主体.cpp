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
int isexist(addressbooks* abs, string name);//���������ϵ���Ƿ���ڵĺ���,����1:ͨѶ¼������2;�Ա�����
void deleteperson(addressbooks* abs);//����ɾ����ϵ�˺���
void findperson(addressbooks* abs);//����������ϵ�˺���
void modifyperson(addressbooks* abs);//�����޸���ϵ�˺���
void cleanperson(addressbooks* abs);//���������ϵ�˵ĺ���
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
			addperson(&abs);//���������ϵ�˺���
			break;
		case 2://2.��ʾ��ϵ��
			showperson(&abs);//������ʾ��ϵ�˺���
			break;
		case 3://3.ɾ����ϵ��
		{
			deleteperson(&abs);//����ɾ����ϵ�˺���
			//cout << "������Ҫɾ������ϵ�˵�����:";
			//string name;
			//cin >> name;
			//if (isexist(&abs, name) == -1)
			//{
			//	cout << "���޴���" << endl;
			//}
			//else
			//{
			//	cout<<"�ҵ�����"<<endl;
			//}����ɾ����ϵ�˺���
			break;
		}
		case 4://4.������ϵ��
			findperson(&abs);//���ò�����ϵ�˺���
			break;
		case 5://5.�޸���ϵ��
			modifyperson(&abs);//�����޸���ϵ�˺���
			break;
		case 6://6.�����ϵ��
			cleanperson(&abs);//���������ϵ�˵ĺ���
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
			 cout <<"����:" << abs->arr[i].m_name << "\t";
			 cout << "�Ա�:" << (abs->arr[i].m_sex == 1 ? "��" : "Ů") << "\t";//��Ŀ������ж�
			 cout << "����:" << abs->arr[i].m_age << "\t";
			 cout << "�绰:" << abs->arr[i].m_phone << "\t";
			 cout << "סַ:" << abs->arr[i].m_addr << "\t";
			 cout << endl;
		 }
	 }
	 system("pause");
	 system("cls"); 
 }
 int isexist(addressbooks* abs, string name)//��������ϵ���Ƿ���ڵĺ���
 {
	 for (int i = 0; i < abs->m_size; i++)
	 {
		 if (abs->arr[i].m_name == name)//�ҵ��û�����������i
		 {
			 return i;
		 }
	 }
	 return -1;//δ�ҵ��û���������-1
 }
 void deleteperson(addressbooks* abs)
 {
	 cout << "������Ҫɾ������ϵ������:";
	 string name;
	 cin >> name;
	 cout << endl;
	 int ret = isexist(abs, name);
	 if(ret!=-1)//���ret������-1��ɾ����ϵ��
	 {
		 for (int i = ret; i < abs->m_size; i++)
		 {
			 if (abs->m_size==1)continue;
			 else
			 {
				 abs->arr[i] = abs->arr[i + 1];//����ǰ��
			 } 
		 }
		 abs->m_size--;
		 cout << "ɾ���ɹ�" << endl;
	 }
	 else//���ret=-1,������޴���
	 {
		 cout << "���޴���" << endl;
	 }
	 system("pause");
	 system("cls");
 }
 void findperson(addressbooks* abs)//���������ϵ�˺���
 {
	 cout << "��������Ҫ���ҵ���ϵ������:";
	 string name;
	 cin >> name;
	 cout << endl;
	 int ret = isexist(abs, name);
	 if (ret != -1)//�ҵ���ϵ��
	 {
		 cout << "����:" << abs->arr[ret].m_name << "\t";
		 cout << "�Ա�:" << (abs->arr[ret].m_sex == 1 ? "��" : "Ů") << "\t";//��Ŀ������ж�
		 cout << "����:" << abs->arr[ret].m_age << "\t";
		 cout << "�绰:" << abs->arr[ret].m_phone << "\t";
		 cout << "סַ:" << abs->arr[ret].m_addr << "\t";
		 cout << endl;
	 }
	 else
	 {
		 cout << "���޴���!" << endl;
	 }
	 system("pause");
	 system("cls");
 }
 void modifyperson(addressbooks* abs)//�����޸���ϵ�˺���
 {
	 cout << "��������Ҫ�޸ĵ���ϵ��:";
	 string name;
	 cin >> name;
	 cout << endl;
	 int ret = isexist(abs, name);
	 if (ret != 1)//�ҵ���ϵ��
	 {
		 cout << "�ҵ���ϵ��" << endl;
		 //����
		 string name;
		 cout << "���޸�����:";
		 cin >> name;
		 cout << "\n";
		 abs->arr[ret].m_name = name;
		 //�Ա�
		 cout << "���޸��Ա�:" << endl;
		 cout << "1---�� 2---Ů" << endl;
		 int sex = 0;
		 while (1)
		 {
			 cin >> sex;
			 if (sex == 1 || sex == 2)//��������ȷ���˳�
			 {
				 abs->arr[ret].m_sex = sex;
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
			 cout << "���޸�����:";
			 int age;
			 cin >> age;
			 if (age < 0 || age>150)
			 {
				 cout << "���޸�����" << endl;
			 }
			 else
			 {
				 abs->arr[ret].m_age = age;
				 break;
			 }
		 }

		 //�绰
		 cout << "���޸ĵ绰:";
		 string phone;
		 cin >> phone;
		 abs->arr[ret].m_phone = phone;
		 //סַ
		 cout << "���޸ĵ�ַ:";
		 string addr;
		 cin >> addr;
		 abs->arr[ret].m_addr = addr;
	 }
	 else
	 {
		 cout << "���޴���" << endl;
	 }
	 system("pause");
	 system("cls");
 }
 void cleanperson(addressbooks* abs)//���������ϵ�˵ĺ���
 {
	 abs->m_size = 0;
	 cout << "ͨѶ¼�����" << endl;
	 system("pause");
	 system("cls");
 }