#include<bits/stdc++.h>
using namespace std;

const int N = 10005;
int fa[N];//父节点数 

//初始化：每个人的父亲一开始是自己 
void init(int n)
{
	for(int i = 1;i <= n;i++)
	{
		fa[i] = i;
	}
}

//查找根节点（路径压缩，最常用写法）
int find(int x)
{
	if(fa[x] == x)
	return x;
	return fa[x] = find(fa[x]);//路径压缩：把路径上节点直接接到根上 
 } 
 
//合并两个集合
void unite(int x,int y)
{
	int fx = find(x);
	int fy = find(y);
	if(fx != fy)
	{
		fa[fx] = fy;
	}
 } 
 
//判断是否属于同一个集合
bool same(int x,int y)
{
	return find(x) == find(y);
 } 

int main()
{
//	ios::sync_with_stdio(0);	cin.tie(0);
	int n,m;      //n个元素，m次操作 
	cin>>n>>m;
	init(n);
	
	for(int i = 1;i <= m;i++)
	{
		int op,x,y;
		cin>>op>>x>>y;
		if(op == 1)
		{
			unite(x,y);//合并x和y 
		}
		else if(op == 2)
		{
			//查询x和y是否同集合 
			if(same(x,y))
			cout<<"YES"<<"\n";
			else
			cout<<"NO"<<"\n";
		}
	}
	
	return 0;
}
