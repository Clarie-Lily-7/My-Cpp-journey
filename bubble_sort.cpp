#include<iostream>
using namespace std;

int main()
{
	int a[9];
	for(int i = 0;i < 9;i++)
	{
		cin>>a[i];
	}
	
	cout<<"ÅÅÐòÇ°£º"<<endl;
	for(int i=0;i<9;i++)
	{
	cout<<a[i]<<" ";
	}
	cout<<endl;
	
	// Ã°ÅÝÅÅÐò 
	for(int i = 0;i < 9-1;i++)
	{
		for(int j = 0;j < 9-i-1;j++)
		
		if(a[j]>a[j+1])
		{
			int temp = a[j];
			a[j] = a[j+1];
			a[j+1] = temp;
		}
	}
	
	cout<<"ÅÅÐòºó£º"<<endl;
	for(int i=0;i<9;i++)
	{
	cout<<a[i]<<" ";
	}
	
	
	return 0;
}
