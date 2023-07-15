#include<bits/stdc++.h>
using namespace std;

void solve(){
	
int n;
cin>>n;

int k = 3;

int div = n/k;
int quot = n%k;

int ones = div;
int twos = div;

if(quot==0)
cout<<ones<<" "<<twos<<endl;

else if(quot==1)
cout<<ones+1<<" "<<twos<<endl;
else
cout<<ones<<" "<<twos+1<<endl;

}

int main () {
	
int t;
cin>>t;

while(t--)
solve();	
	
	
return 0;

}