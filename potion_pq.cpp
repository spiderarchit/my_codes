#include<bits/stdc++.h>
using namespace std;

#define int long long

void solve() {
	
int n;
cin>>n;

vector<int>arr;

for(int  i =0;i<n;i++)
{
	int x;
	cin>>x;
	arr.push_back(x);
}

// min heap
priority_queue<int,vector<int>,greater<int>>pq;

int potion = 0,sum =0;

for(int i=0;i<n;i++)
{
	sum+=arr[i];
	pq.push(arr[i]);
	potion++;
	
	while(sum<0)
	{
	  sum-=pq.top();
	  pq.pop();
	  potion--;
	}
	
	
}

cout<<potion<<endl;

	
}

signed main() {
	
solve();
	
return 0;

}