#include<bits/stdc++.h>
using namespace std;

const int N = 1005;
int dp[N];  // dp[j]表示容量为j的背包所能装下的最大价值 
int w[N],v[N];

int main()
{
	int n,V;
	cin>>n>>V;
	for(int i = 1;i <= n;i++)
	{
		cin>>w[i]>>v[i];
	}
	for(int i = 1;i <= n;i++)
	{
		//核心：完全背包内层循环必须【正序】
		//原因：正序时，dp[j - w[i]]是当前物品 i 更新过的新数据，
		//相当于在当前基础上又加了一个物品 i，实现无限次选取。 
		for(int j = w[i];j <= V;j++)
		{
			dp[j] = max(dp[j],dp[j - w[i]] + v[i]);
		}
	}
	cout<<dp[V]<<endl;
	
	
	return 0;
 } 
