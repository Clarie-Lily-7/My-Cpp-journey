#include <iostream>
#include<string>
using namespace std;

//学习深拷贝与浅拷贝问题 
class Person
{
	public:
		Person ()
		{
			cout<<"调用构造函数"<<endl;
		}
		Person (int age,int height)
		{
			cout<<"调用有参构造函数"<<endl;
			p_age = age;
			p_height = new int(height);
		}
		
		//手动实现拷贝构造函数，解决浅拷贝的问题 
		Person (const Person &p)
		{
			p_age = p.p_age;
			//p_height = p.p_height;   //编译器默认实现的代码可能造成堆区内存重复释放 
			//避免堆区内存重复释放，需手动开辟一个堆区存放p2的height 
			
			//深拷贝操作
			
			p_height = new int(*p.p_height); 
			
		 } 
		~Person ()
		{
			//析构代码，将堆区开辟的数据进行释放
			if(p_height != NULL)
			{
				delete p_height;
				p_height = NULL;      //预防野指针 
			 } 
			cout<<"调用析构函数"<<endl;
		}
	    string p_name;
		int p_age;
		int *p_height;
};

void test01()
{
	Person p1(18,180);
	
	cout<<"p1的年龄："<<p1.p_age<<"\t"<<"p1的身高："<< *p1.p_height<<endl; 
	
	Person p2(p1);
	
	cout<<"p2的年龄："<<p2.p_age<<"\t"<<"p2的身高："<< *p2.p_height<<endl; 
}

int main()
{
	
	test01();
	
	
	system("pause");
	return 0;
}
