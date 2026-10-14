#include<iostream>
#include<string>
using namespace std;

class Person     //人类 
{
	private:
		
		string m_name;
		int m_age;
		
	public:
		
		void setname(string name)
		{
			m_name = name;    //赋值 
		}
		
		void setage(int age)
		{
			//若数据不合法，则不执行赋值操作 
			if(age < 0)
			{
				cout<<"年龄不能为负！"<<endl;
				return ;
				
			}
			m_age = age;    //赋值 
		}
		
		
		string getname()
		{
			return m_name;
		}
		
		int getage()
		{
			return m_age;
		}
	
};

int main()
{
	
	Person P;   //对象 
	
	P.setname("张三");
	P.setage(25);
	
	cout<<"姓名："<<P.getname()<<endl;
	cout<<"年龄："<<P.getage()<<endl;
	
	system("pause");
	
	return 0;
}
