#include<bits/stdc++.h>
using namespace std;

int main() {
	
string k = "314159265358979323846264338327";

int t;
cin>>t;

while(t--)
{
string n;
cin>>n;
int ans = 0;

for(int i=0;i<30;i++)
{

if(n[i]==k[i])
ans++;	
else
break;
}

cout<<ans<<endl;
}
	
	
return 0;

}