#include<iostream>
using namespace std;

//立方体类 
class Cube
{
	private:
		//属性 
		int m_L;    // 长 
		int m_W;    //宽 
		int m_H;    //高 
		
	public:
		
		//行为 
		//设置 
		void setL(int L)
		{
			m_L = L;
		}
	    void setW(int W)
		{
			m_W = W;
		}
		void setH(int H)
		{
			m_H = H;
		}
		
		//获取 
		int getL()
		{
			return m_L;
		}
		int getW()
		{
			return m_W;
		}
		int getH()
		{
			return m_H;
		}
		
		//获取面积、体积 
		int calculateS()
		{
			return 2*m_L*m_W+2*m_L*m_H+2*m_W*m_H;
		}
		int calculateV()
		{
			return m_L*m_W*m_H;
		}
		
		//设置成员函数判断立方体是否相等 
		bool issame(Cube &C1)
		{
			if(m_L == C1.getL() && m_W == C1.getW() && m_H == C1.getH())
	           {
		          return true;
	           }
	            return false;
		 } 
		
};

//设置全局函数判断C1是否与C2相等
bool iscube(Cube &C1,Cube &C2)	
{
	if(C1.getL() == C2.getL() && C1.getW() == C2.getW() && C1.getH() == C2.getH())
	{
		return true;
	}
	return false;
}
 
int main ()
{
	//对象C1 
	Cube C1;
	
	C1.setL(9);
	C1.setW(10);
	C1.setH(10);

	cout<<"C1的面积："<<C1.calculateS()<<endl;
	cout<<"C1的体积："<<C1.calculateV()<<endl;
	
	//对象C2 
	Cube C2;
	
	C2.setL(10);
	C2.setW(10);
	C2.setH(10);
	
	cout<<"C2的面积："<<C2.calculateS()<<endl;
	cout<<"C2的体积："<<C2.calculateV()<<endl;
	
	
	//判断是否相等 
	//全局函数 
	bool ret = iscube(C1,C2);
	
	if(ret == true)
	{
		cout<<"全局函数-立方体相等"<<endl;
	}
	 else 
	 {cout<<"全局函数-立方体不相等"<<endl;}
	 
	
	//成员函数 
	ret = C1.issame(C2);  //调用C1的成员判断函数，此时C1已赋值，再赋值C2，可判断 

	if(ret == true)
	{
		cout<<"成员函数-立方体相等"<<endl;
	}
	 else 
	 {cout<<"成员函数-立方体不相等"<<endl;}
	
	
	
	system("pause");
	
	return 0;
}
