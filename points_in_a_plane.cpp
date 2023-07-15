#include<bits/stdc++.h>
using namespace std;

#define int long long

int b_search(int chips)
{
	// int l = -1;
	// int r = 1e9;
// 	
	// while(r-l>1)
	// {
		// int mid = ((l+r)/2);
// 		
		// if(mid*mid>=chips)
		// r = mid;
		// else
		// l = mid;
	// }
// 	
	// return r-1; // because we got the value of (k+1 ) here so 
	            // we need to subtract 1 from our answer here...
	            
	            int a =  sqrtl(chips);
	            if(a*a ==chips)
	            return a-1;
	            
	            return a;
	
}

void solve() {
	
int chips;
cin>>chips;

cout<<b_search(chips)<<endl;

return;
	
}

signed main() {
	
int t;
cin>>t;

while(t--)
solve();
	
return 0;

}