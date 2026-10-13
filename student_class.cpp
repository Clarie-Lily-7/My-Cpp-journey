#include<iostream>
#include<string>
using namespace std;

//学生类 
class Student
{
	private:
		
		//属性
		string m_name;     //姓名 
		int m_id;      //学号 
	
	public:
		
		//行为
		//赋值 
		void SetStudent()
		{
			cout<<"为学生姓名赋值：";
	        cin>>m_name;
	
	        cout<<"为学生学号赋值：";
	        cin>>m_id;
			
		}
		//显示 
		void ShowStudent()
		{
			cout<<"学生姓名："<<m_name<<"\t"<<"学生学号："<<m_id<<endl;
			
		 } 
		
};

int main()
{
	//通过学生类，创建一个具体对象 
	Student S;
	
	S.SetStudent();   //调用赋值函数 
	
	S.ShowStudent();   //调用显示函数 
	
	system("pause");
	
	return 0;
}
