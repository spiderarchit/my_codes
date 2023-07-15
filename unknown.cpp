#include<bits/stdc++.h>
using namespace std;

void solve() {

int n;
cin>>n;

string s;
cin>>s;

int count = 1;

char ch = s[0];
string k = "";

for(int i =1;i<n;i++)
{
	if(s[i]==ch)
	count+=1;
	
	else
	{   
		if(count%2)
		k+=ch;
		else
		{
			k+=ch;
			k+=ch;
		}
		ch = s[i];
		count = 1;
	}
}

if(count%2)
k+=ch;
else
{k+=ch;
k+=ch;
}


cout<<k<<endl;
}

int main() {
	
int t;
cin>>t;

while(t--)
solve();
	
	
	
return 0;

}