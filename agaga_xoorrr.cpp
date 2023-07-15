#include<bits/stdc++.h>
using namespace std;

#define int long long

void solve() {
	
int n;
cin>>n;

vector<int>v;

for(int i =0;i<n;i++)
{
	int x;
	cin>>x;
	
	v.push_back(x);
}	

bool ff = 0;
for(int i =0;i<n-1;i++)
{
  
  int x = 0;
  
  for(int j =0 ;j<=i;j++)
  x^=v[j];
  
  int t = 0;
  bool f = 0;
  
  for(int j =i+1;j<n;j++)
  {
  	t^=v[j];
  	if(t==x)
  	{
  		t = 0;
  		f = 1;
  	}
  }
  
  if(t==0 and f)
  {
  	cout<<"YES"<<endl;
  	ff = 1;
  	break;
  }
  
}

if(!ff)
  {
  	cout<<"NO"<<endl;
  	
  }	
	
}

signed main() {
	
int t;
cin>>t;

while(t--)
solve();	
	
return 0;

}