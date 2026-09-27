#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
using namespace std;

//学生结构体 
struct Student 
{
	string sName;
	int score;
	
};

//老师结构体
struct Teacher
{
	string tName;
	struct Student sArray[5];
};

//循环赋值函数 
void allocateSpace(struct Teacher tArray[],int len)
{
	string nameSeed = "ABCDE";
	
	for(int i = 0;i < len;i++)
	{
		tArray[i].tName = "Teacher_";
		tArray[i].tName += nameSeed[i];
		
		//利用循环给学生赋值
		for(int j = 0;j < 5;j++)
		{
			tArray[i].sArray[j].sName = "Student_";
			tArray[i].sArray[j].sName += nameSeed[j];
			
			int random = rand() % 61 +40;   //40-100
			tArray[i].sArray[j].score = random;
		 } 
	}
}

//循环打印信息函数
void printfTeacher(struct Teacher tArray[],int len)
{
	for(int i=0;i < len;i++)
	{
		cout<<"老师姓名："<<tArray[i].tName<<endl;
		
		for(int j=0; j < 5;j++)
		{
			cout<<"学生姓名："<<tArray[i].sArray[j].sName<<
			"考试分数："<<tArray[i].sArray[j].score<<endl;
		 } 
	}
} 

 
int main()
{
	//随机数种子 
	srand((unsigned int)time(NULL));
	
	struct Teacher tArray[3];
	int len=sizeof(tArray) / sizeof(tArray[0]);
	
	//赋值 
	allocateSpace(tArray,len);
	
	//打印 
	printfTeacher(tArray,len);
	
	
	return 0;
}
