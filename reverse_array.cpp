#include<iostream>
using namespace std;

int main()
{
	int a[5] = {1,2,3,4,5};
	cout<<"原数组："<<endl;
	for(int i=0;i<5;i++)
	{
		cout<<a[i];
	}
	cout<<endl;
	int start = 0;
	int end = sizeof(a)/sizeof(a[0])-1;
	
	while(start<end)
	{
		int temp = a[start];
		a[start] = a[end];
		a[end] = temp;
		
		start++;
		end--;
	}
	
	cout<<"换后："<<endl;
	for(int i=0;i<5;i++)
	{
		cout<<a[i];
	}
	
	
	
	return 0;
}
