#include<bits/stdc++.h>
using namespace std;

void dfs(vector<int> v[],int src, vector<int> &ans, bool*visited)
{
	visited[src] = true;
	ans.push_back(src);
	
	for(auto it:v[src])
	{
		if(!visited[it])
		dfs(v,it,ans,visited);
	}
}

void solve()
{
	int n,k;
	cin>>n>>k;
	string s,t;
	cin>>s;
	cin>>t;
	
	
	vector<int>v[n+1];
	
	for(int i =0;i<n;i++)   // o(n)
	{
		if(i+k<n)
		{
			v[i].push_back(i+k);
			v[i+k].push_back(i);
		}
		
		if(i+k+1<n)
		{
			v[i].push_back(i+k+1);
			v[i+k+1].push_back(i);
		}
	}
		
		
		bool visited[n+1];
		memset(visited,false,sizeof(visited));
		
		for(int i =0;i<n;i++)   
		{
			vector<int> ans;
			
			if(!visited[i])
			dfs(v,i,ans,visited);  // o(v+e)
			
			string a = "";
		    string b = "";
		    
			for(auto id:ans)    // o(n)
			{
			 a+=s[id];
			 b+=t[id];
			}
			
			sort(a.begin(),a.end()); // o(nlogn)
			sort(b.begin(),b.end());
			if(a!=b)
			{
				cout<<"NO"<<endl;
				return;
			}
		}
		
		cout<<"YES"<<endl;
		return;
	
}

int main() {

int t;
cin>>t;
while(t--)
solve();
return 0;
}