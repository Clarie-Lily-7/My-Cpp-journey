#pragma once
#include<iostream>
using namespace std;

class Point
{
	public:
	//设置x坐标 
	void setx(int x);
	//获取x坐标
	int getx();
	//设置y坐标 
	void sety(int y);
	//获取y坐标
	int gety();
	
	private:
		int m_X;
		int m_Y;
 } ;
