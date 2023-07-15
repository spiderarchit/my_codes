#include<bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
	
int n;
cin>>n;
string s;
cin>>s;

map<char,int> meow;
bool flag = true;
for(int i =0;i<n;i++)
{   if(tolower(s[i])=='m' and meow.find('e')!=meow.end())
    flag = false;
    if(tolower(s[i])=='e' and meow.find('o')!=meow.end())
    flag = false;

    if(meow.find('m')!=meow.end() and meow.find('e')!=meow.end() and meow.find('o')!=meow.end() and meow.find('w')!=meow.end() and  tolower(s[i])!='w')
    flag = false;

	if(meow.find(tolower(s[i]))==meow.end())
	{
		meow[tolower(s[i])] = i;
		
	}
	
}

if(meow.size()>4 || meow.find('m')==meow.end() || meow.find('e')==meow.end() || meow.find('o')==meow.end() || meow.find('w')==meow.end() || flag == false)
{
	cout<<"NO"<<endl;
}
else
{
  int min_idx=INT_MAX;
  int max_idx=INT_MIN;
  
  min_idx = min(meow['m'],min(meow['e'],min(meow['o'],meow['w'])));
  max_idx = max(meow['m'],max(meow['e'],max(meow['o'],meow['w'])));
  
  // cout<<min_idx<<endl;
  // cout<<max_idx<<endl;
  if(meow['m']!=min_idx || meow['w']!=max_idx)
  {
  	cout<<"NO"<<endl;
  }
  else
  {
  	if(meow['e']<meow['o'])
  	{
  		cout<<"YES"<<endl;
  	}
  	else
  	{
  		cout<<"NO"<<endl;
  	}
  }
  
}

}

int32_t main() {

int t;
cin>>t;

while(t--)
{
	solve();
}
	
	
return 0;

}