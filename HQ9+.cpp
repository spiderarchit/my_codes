#include<bits/stdc++.h>
using namespace std;

void solve(){
	
string s;
cin>>s;

bool flag = true;
for(int i=0;i<s.length();i++)
{
	if(s[i]=='H' || s[i]=='Q' || s[i]=='9' || s[i]=='+')
	{cout<<"YES";
	flag = false;
	break;}
	
}

if(flag==true)
{
	cout<<"NO"<<endl;
}	
	
	
}

int main() {
	
solve();	
	
return 0;

}