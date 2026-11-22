#include<bits/stdc++.h>
using namespace std;

const int N = 1005;
int dp[N];   // dp[j]表示容量为j的背包所能装下的最大价值 
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
		//核心：01背包内层循环必须【倒序】
		//原因：保证更新dp[j]时，使用的是上一层（未放当前物品）的数据，
		//确保每个物品只能被选一次 
		for(int j = V;j >= w[i];j--)
		{
			dp[j] = max(dp[j],dp[j - w[i]] + v[i]);
		}
	}
	
	cout<<dp[V]<<endl;
	//输出容量为V时的最大价值 
	
	return 0;
 } 
