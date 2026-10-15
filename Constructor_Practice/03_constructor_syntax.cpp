#include <iostream>
#include <string>
using namespace std;

class Person
{
	private:
		
		string p_name;
		int p_age;
		
	public:
		
		Person ()
		{
			cout<<"调用无参构造函数"<<endl;
		}
		Person (int a)
		{
			cout<<"调用有参构造函数"<<endl;
		}
		Person(const Person &p)
		{
			cout<<"调用拷贝函数"<<endl; 
		}
		~Person()
		{
			cout<<"调用析构函数"<<endl;
		}
	
};

void getperson()
{
	//括号法 
	Person p1;
	Person p2(10);
	Person p3(p2);
	
	//显示法
	Person p4;
	Person p5 = Person (10);
	Person p6 = Person (p5);
	
	//隐式转换法
	Person p7;
	Person p8 = 10;
	Person p9 = p8;
	 
}

int main()
{
	//调用 
	getperson();
	
	system ("pause");
	
	return 0;
}
