#include <iostream>
#include <string>
using namespace std;

class Person
{
	
	private:
	string p_name; 
	int p_age;
	
	public:
		Person();    //声明 
		Person(int a);     //声明 
		Person(const Person &b);     //声明 
		~Person()
		{
			cout<<"调用析构函数"<<endl;
		}
	
};


Person::Person()
{
	cout<<"调用无参构造函数"<<endl;
}
Person::Person(int a)
{
	cout<<"调用有参构造函数"<<endl;
}
Person::Person(const Person &b) 
{
	cout<<"调用拷贝构造函数"<<endl;
}

int main()
{
	
	Person p1;
	Person p2(1);
	Person p3(p2);
	
	system("pause");      // 
	
	return 0;
 } 
