#include<bits/stdc++.h>
using namespace std;
#define int long long

void solve() {

int n;
cin>>n;

priority_queue<int>pq;
int ans = 0;

for(int i =0;i<n;i++)
{   int x;
    cin>>x;
    if(x!=0)
    pq.push(x);
    
    else{
        if(!pq.empty())
        {
        ans += pq.top();
        pq.pop();
        }
    }

}

cout<<ans<<endl;

}

int32_t main() {

int t;
cin>>t;

while(t--)
solve();

return 0;

}