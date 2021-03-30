#include<iostream>
using namespace std;
#define max 1000
void showmenu();//声明菜单功能函数
struct person//创建联系人结构体
{
	string m_name;//姓名
	int m_sex;//性别:1男 2女
	int m_age;//年龄
	string m_phone;//电话
	string m_addr;//住址
};
struct addressbooks//创建通讯录结构体
{
	person arr[max];//通讯录中保存人数的数组
	int m_size;
};
void addperson(addressbooks* abs);//声明添加联系人函数
void showperson(addressbooks* abs);//声明显示联系人函数
int main()
{
	addressbooks abs;
	abs.m_size = 0;
	while (1)
	{
		showmenu();//调用菜单功能函数
		int select;
		cout << "请输入数字:";
		cin >> select;
		switch (select)
		{
		case 1://1.添加联系人
			addperson(&abs);
			break;
		case 2://2.显示联系人
			showperson(&abs);
			break;
		case 3://3.删除联系人
			break;
		case 4://4.查找联系人
			break;
		case 5://5.修改联系人
			break;
		case 6://6.清空联系人
			break;
		case 0://0.退出通讯录
			cout << "欢迎下次使用" << endl;
			system("pause");
			return 0;
			break;
		default:
			cout << "无法识别，请重新输入" << endl;//如果输入的不是0123456,提示错误
			break;
		}
	}
	system("pause");
	return 0;
}
void showmenu()//定义菜单功能函数
{
	cout << "************************" << endl;
	cout << "***** 1.添加联系人 *****" << endl;
	cout << "***** 2.显示联系人 *****" << endl;
	cout << "***** 3.删除联系人 *****" << endl;
	cout << "***** 4.查找联系人 *****" << endl;
	cout << "***** 5.修改联系人 *****" << endl;
	cout << "***** 6.清空联系人 *****" << endl;
	cout << "***** 0.退出通讯录 *****" << endl;
	cout << "************************" << endl;
}
 void addperson(addressbooks* abs)//定义添加联系人函数
{
	//判断通讯录是否已满，如果满了就不再添加
	if (abs->m_size == max)
	{
		cout << "通讯录已满,无法添加！" << endl;
		return ;
	}
	else
	{
		//添加具体联系人

		//姓名
		string name;
		cout << "请输入姓名:";
		cin >> name;
		cout << "\n";
		abs->arr[abs->m_size].m_name = name;
		//性别
		cout << "请输入性别:" << endl;
		cout << "1---男 2---女" << endl;
		int sex = 0;
		while (1)
		{
			cin >> sex;
			if (sex == 1 || sex == 2)//如果输出正确，退出
			{
				abs->arr[abs->m_size].m_sex = sex;
				break;
			}
			else//如果输出不正确，重新输入
			{
				cout << "无法识别,请重新输入" << endl;
			}

		}
		//年龄
		while (1)
		{
			cout << "请输入年龄:";
			int age;
			cin >> age;
			if (age < 0 || age>150)
			{
				cout << "请重新输入" << endl;
			}
			else
			{ 
				abs->arr[abs->m_size].m_age = age;
				break;
			}
		}
		
		//电话
		cout << "请输入电话:";
		string phone;
		cin >> phone;
		abs->arr[abs->m_size].m_phone = phone;
		//住址
		cout << "请输入地址:";
		string addr;
		cin >> addr;
		abs->arr[abs->m_size].m_addr = addr;
		//更新通讯人数
		abs->m_size++;
		cout << "添加成功" << endl;
		system("pause");
		system("cls");
	}
}
 void showperson(addressbooks *abs)
 {
	 if (abs->m_size == 0)//如果联系人为0，显示记录为空
	 {
		 cout << "记录为空" << endl;
	 }
	 else
	 {
		 for (int i = 0; i < abs->m_size; i++)
		 {
			 cout << "姓名:" << abs->arr[i].m_name << "\t";
			 cout << "性别:" << (abs->arr[i].m_age == 1 ? "男" : "女") << "\t";
			 cout << " 年龄:" << abs->arr[i].m_age << "\t";
			 cout << " 电话:" << abs->arr[i].m_phone << "\t";
			 cout << " 住址:" << abs->arr[i].m_addr << "\t";
			 cout << endl;
		 }
	 }
	 system("pause");
	 system("cls"); 
 }