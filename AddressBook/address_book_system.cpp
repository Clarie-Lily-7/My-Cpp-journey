#include <iostream>
#include <string>
#define MAX 1000
using namespace std;

//设计联系人结构体
struct Person
{
	//姓名
	string p_Name;
	//性别 1 男 2 女 
	int p_Sex;
	//年龄
	int p_Age;
	//电话
	string p_Phone;
	//住址
	string p_Addr;
	
};
//设计通讯录结构体
struct Addressbooks
{
	//通讯录中保存的联系人数组
	struct Person personArray[MAX];
	//通讯录中当前记录的联系人个数
	int A_Size;
};

//菜单界面 
void showMenu()
{
	cout<<"*************************"<<endl;
	cout<<"***** 1、添加联系人 *****"<<endl;
	cout<<"***** 2、显示联系人 *****"<<endl;
	cout<<"***** 3、删除联系人 *****"<<endl;
	cout<<"***** 4、查找联系人 *****"<<endl;
	cout<<"***** 5、修改联系人 *****"<<endl;
	cout<<"***** 6、清空联系人 *****"<<endl;
	cout<<"***** 0、退出通讯录 *****"<<endl;
	cout<<"*************************"<<endl;
	
}

//添加联系人函数
void addperson(Addressbooks *abs)
{
	//判断通讯录是否已满，满了不再添加
	if(abs->A_Size == MAX)
	{
		cout<<"联系人已满！无法添加！"<<endl;
		return;
	}
	 else
	{
	 	//添加联系人
	 	
	 	//姓名 
		string name;
		cout<<"请输入姓名："<<endl;
		cin>>name;
		abs->personArray[abs->A_Size].p_Name = name;
		
		//性别
		cout<<"请输入性别："<<endl;
		cout<<"1---男"<<endl;
		cout<<"2---女"<<endl;
		int sex = 0;
		while(true)
		{
			//如果输入的是1或2可退出循环，因为是正确值
			//如果输入有误，重新输入 
			cin>>sex;
			
			if(sex == 1||sex == 2)
			{
				abs->personArray[abs->A_Size].p_Sex = sex;
				break;
			}
			cout<<"输入有误！"<<endl;
		}
		
		//年龄
		cout<<"请输入年龄："<<endl;
		int age = 0;
		cin>>age;
		abs->personArray[abs->A_Size].p_Age = age;
		
		//电话
		cout<<"请输入联系电话："<<endl;
		string phone;
		cin>>phone;
		abs->personArray[abs->A_Size].p_Phone = phone;
		
		//住址
		cout<<"请输入家庭住址："<<endl;
		string address;
		cin>>address;
		abs->personArray[abs->A_Size].p_Addr = address;
		
		//更新通讯录人数
		abs->A_Size++;
		
		cout<<"添加成功！"<<endl;
		
		system("pause"); //按任意键继续 
		system("cls"); //清屏操作 
	}
}

//显示联系人函数
void showperson(Addressbooks *abs)
{
	//判断通讯录中人数是否为0，如果为0，提示为空
	//不为0，显示记录的联系人信息
	if(abs->A_Size == 0)
	{
		cout<<"当前记录为空"<<endl;
	 } 
	else
	{
		for(int i = 0;i < abs->A_Size;i++)
		{
			cout<<"姓名："<<abs->personArray[i].p_Name<<" ";
			cout<<"性别："<<(abs->personArray[i].p_Sex == 1 ? "男":"女")<<" ";
			cout<<"年龄："<<abs->personArray[i].p_Age<<" ";
			cout<<"电话："<<abs->personArray[i].p_Phone<<" ";
			cout<<"住址："<<abs->personArray[i].p_Addr<<endl;
			
		}
	}
	system("pause"); //按任意键继续 
	system("cls"); //清屏操作 
}

//封装检测联系人是否存在
//存在则返回联系人所在位置
int isExist(Addressbooks *abs,string name)
{
	for(int i = 0;i < abs->A_Size;i++)
	{
		//找到，返回联系人数组的下标 
		if(abs->personArray[i].p_Name == name)
		{return i;}
	}
	//没找到
	return -1; 
}

//删除指定联系人函数
void deleteperson(Addressbooks *abs)
{
	cout<<"请输入需要删除的联系人姓名："<<endl;
	
	string name;
	cin>>name;
	
	//ret != -1 找到 
	int ret = isExist(abs,name); 
	
	if(ret != -1)
	{
		//删联系人，后面的数据前移
		for(int i = ret;i < abs->A_Size;i++)
		{
			//数据前移 
			abs->personArray[i] = abs->personArray[i+1];
		 } 
		 abs->A_Size--;
		 
		 cout<<"删除成功!"<<endl;
	}
	else
	{
		cout<<"查无此人!"<<endl; 
	}
	
	system("pause"); //按任意键继续 
	system("cls"); //清屏操作 
}

//查找联系人函数
void seekperson(Addressbooks *abs)
{
	cout<<"请输入要查找的联系人姓名："<<endl;
	
	string name;
	cin>>name;
	
	int ret = isExist(abs,name);
	
	if(ret != -1)
	{
	        cout<<"姓名："<<abs->personArray[ret].p_Name<<" ";
			cout<<"性别："<<(abs->personArray[ret].p_Sex == 1 ? "男":"女")<<" ";
			cout<<"年龄："<<abs->personArray[ret].p_Age<<" ";
			cout<<"电话："<<abs->personArray[ret].p_Phone<<" ";
			cout<<"住址："<<abs->personArray[ret].p_Addr<<endl;
	 } 
	else
	{
		cout<<"查无此人!"<<endl; 
	}
	
	system("pause"); //按任意键继续 
	system("cls"); //清屏操作 
}

//修改联系人数据函数
void modify(Addressbooks *abs)
{
	cout<<"请输入要修改的联系人姓名："<<endl;
	
	string name;
	cin>>name;
	
	int ret = isExist(abs,name);
	
	if(ret != -1)
	{
		cout<<"请重新输入联系人信息"<<endl; 
		
		//姓名 
		string name;
		cout<<"请输入姓名："<<endl;
		cin>>name;
		abs->personArray[ret].p_Name = name;
		
		//性别
		cout<<"请输入性别："<<endl;
		cout<<"1---男"<<endl;
		cout<<"2---女"<<endl;
		int sex = 0;
		while(true)
		{
			//如果输入的是1或2可退出循环，因为是正确值
			//如果输入有误，重新输入 
			cin>>sex;
			
			if(sex == 1||sex == 2)
			{
				abs->personArray[ret].p_Sex = sex;
				break;
			}
			cout<<"输入有误！"<<endl;
		}
		
		//年龄
		cout<<"请输入年龄："<<endl;
		int age = 0;
		cin>>age;
		abs->personArray[ret].p_Age = age;
		
		//电话
		cout<<"请输入联系电话："<<endl;
		string phone;
		cin>>phone;
		abs->personArray[ret].p_Phone = phone;
		
		//住址
		cout<<"请输入家庭住址："<<endl;
		string address;
		cin>>address;
		abs->personArray[ret].p_Addr = address;
		
		cout<<"修改成功！"<<endl;
	}
	else
	{
		cout<<"查无此人！"<<endl;
	}
	
	system("pause"); //按任意键继续 
	system("cls"); //清屏操作 
 } 

//清空联系人信息
void cleanperson(Addressbooks *abs)
{
	//将当期记录联系人数量置0，实现逻辑清空操作 
	abs->A_Size = 0;
	cout<<"通讯录已清空！"<<endl;
	
	system("pause"); //按任意键继续 
	system("cls"); //清屏操作 
 } 
int main()
{
	//创建联系人结构体变量
	Addressbooks abs;
	//初始化通讯录中当前人员格式
	abs.A_Size = 0; 
	 
	 
	int select = 0;// 创建用户选择输入的变量
	
	// 循环返回菜单，0可退出 
	while(true)
	{
	//调用菜单 
	showMenu();
	
	cin >> select;
	
	switch(select)
	{
		//1、添加联系人
		case 1:
			addperson(&abs);  // 地址传参 
			break;
		//2、显示联系人
		case 2:
			showperson(&abs);
			break;
		//3、删除联系人
		case 3:
			deleteperson(&abs);
			break;
		//4、查找联系人
		case 4:
			seekperson(&abs);
			break;
		//5、修改联系人
		case 5:
			modify(&abs);
			break;
		//6、清空联系人
		case 6:
			cleanperson(&abs);
			break;
		//0、退出通讯录
		case 0:
		    cout<<"欢迎下次使用！"<<endl;
		    system("pause");
		    return 0;
			break;
		default:
			break;
	 }
	}
	
	system("pause");
	
	return 0;
}
