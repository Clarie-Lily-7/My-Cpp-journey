#pragma once
#include<iostream>
#include "Point.h"
using namespace std;


class Circle
{
	private:	
	int m_R;   //半径 
	Point m_center;   //圆心 ,在类中可以让另一个类作为本类的成员 
	
	public:
		
	//设置半径
	void setR(int r);
	//获取半径
	int getR();
	//设置圆心 
	void setCenter(Point center);
	//获取圆心
	Point getCenter();
	
 } ;
