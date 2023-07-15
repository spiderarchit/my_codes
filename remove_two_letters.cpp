#include<bits/stdc++.h>
using namespace std;
#define int long long

void solve() {

int n;
cin>>n;

string s;
cin>>s;

int count = 1;

for(int i=1;i<n-1;i++)
{
	if(s[i-1]!=s[i+1])
	count+=1;

}

cout<<count<<endl;
}

int32_t main() {
	
ios_base::sync_with_stdio(NULL);
cin.tie(NULL);

int t;
cin>>t;

while(t--)
solve();
	
	
return 0;

}