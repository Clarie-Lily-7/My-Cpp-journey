#include<iostream>
using namespace std;
int main()
{
	const int n=100;
	int i,j;
	for(i=2;i<=n;i++)
	{
		int flag=1;
		for(j=2;j<i;j++)
		if(i%j==0)
		{
			flag=0;
			break;
		}
		if(flag==1)
		cout<<i<<endl;
	}
	
	return 0;
}
