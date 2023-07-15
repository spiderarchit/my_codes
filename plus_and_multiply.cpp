// it was a mathematical problem

#include<bits/stdc++.h>
using namespace std;

bool solve() {
	

int n,a,b;
cin>>n>>a>>b;

int s = 1;

if(a==1)
{
	if((n-1)%b==0)
	return true;
	
	return false;
}

while(s<=n)
{
	if((n-s)%b==0)
	return true;
	
	s = s*a;
	
}

return false;	
	
}

signed main() {
	
	
int t;
cin>>t;

while(t--)
{
	if(solve())
	cout<<"Yes"<<endl;
	else
	cout<<"No"<<endl;
}
	
	
return 0;

}