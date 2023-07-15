#include<bits/stdc++.h>
using namespace std;

void solve(){
	
string s;
cin>>s;
string t;
cin>>t;

int n = s.length();
int m = t.length();
int j = n-1;

bool ok = true;

for(int i = m-1;i>=0;i--)
{
  
  while(j>=0 and s[j]!=t[i])
  {
  	j-=2;
  }	
  
  if(j<0)
  {
  	ok = false;
  	break;
  }
  j-=1;
	
}	

ok? cout<<"YES"<<endl: cout<<"NO"<<endl;
	
	
	
}
signed main()
{
	
int t;
cin>>t;

while(t--)
solve();	
	
	
return 0;

}