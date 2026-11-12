#include<iostream>
using namespace std;

//函数模板
//交换 
template <class T>
T  get(T &a,T &b)
{
	T temp = a;
	a =b;
	b = temp;

}
 
int main()
{
	int a = 0,b = 1;
	float c = 0.1,d = 0.2;
	
	get(a,b);
	cout<<"int类型交换后a="<<a<<"\t"<<"b="<<b<<endl;
	get(c,d);
	cout<<"float类型交换后c="<<c<<"\t"<<"d="<<d<<endl;
	
	return 0;
}
