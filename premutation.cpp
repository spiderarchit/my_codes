#include<bits/stdc++.h>
using namespace std;

void solve() {
	
int n;
cin>>n;
 priority_queue<pair<int,int>>pq;
map<int,int>mp;
int q = n-1;
while(n--)
{


 int k =q;
 int i =0;
while(k--)
{
	int x;
	cin>>x;
	mp[x]+=i;
	i++;	
}
	
}

for(auto it:mp)
{
	pq.push({it.second,it.first});
}

vector<int> ans;
while(!pq.empty())
{
	// cout<<pq.top().second<<" ";
	ans.push_back(pq.top().second);
	pq.pop();
}

for(int i = ans.size()-1;i>=0;i--)
cout<<ans[i]<<" ";

cout<<endl;


}

int main(){
	
int t;
cin>>t;

while(t--)
solve();
	
return 0;

}