#include <iostream>
using namespace std;

int main()
{
	int i,n,s;
	cin>>n;
if(n>=1&&n<=999)
{
	for(i=100;i<=n;i++)
	{
	int j=i%10;  // 个位
	int k=i%100/10;  // 十位
	int l=i/100;  // 百位
	
	s=j*j*j+k*k*k+l*l*l;
	
	if(i==s) 
	{cout<<i<<" ";}
	
	}
}
	return 0;
}
