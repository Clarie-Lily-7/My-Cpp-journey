#include<iostream>
#include<math.h>
#include "Point.h"
#include "Circle.h"
using namespace std;

//判断点和圆的位置


//判断点和圆的关系函数
void isrelate(Point &D,Circle &C)
{
	//计算两点之间距离
	int distance = 
	    (D.getx() - C.getCenter().getx()) * (D.getx() - C.getCenter().getx()) +
	    (D.gety() - C.getCenter().gety()) * (D.gety() - C.getCenter().gety());
	
	//计算半径的平方
	int r = C.getR() * C.getR();
	
	//判断点和圆的关系
	if(distance > r)
	{
		cout<<"点在圆外"<<endl;
	 } 
	else if(distance < r)
	{
		cout<<"点在圆内"<<endl;
	}
	else if(distance == r)
	{
		cout<<"点在圆上"<<endl;
	}
}


int main()
{
	Point D;
	Circle C;
	
	//圆心 
	Point center;
	center.setx(10);
	center.sety(0);
	C.setCenter(center);
	//半径
	C.setR(10);
	
	//点
	D.setx(10);
	D.sety(10);
	
	isrelate(D,C);

	system("pause");
	
	return 0;
}
