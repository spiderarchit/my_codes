#include<bits/stdc++.h>
using namespace std;

#define int long long


// i did this question on my own....!!!!
void solve() {

int l,r;
cin>>l>>r;

int ans = 0;

ans += r-l;
int k = 10;

while(r>0 or l>0)
{
  	ans+= (r/k - l/k);
  	r = r/10;
  	l = l/10;
	
}

cout<<ans<<endl;
	
}

signed main() {
	
int t;
cin>>t;

while(t--)
solve();	
	
	
return 0;

}
