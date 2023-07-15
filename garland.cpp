#include<bits/stdc++.h>
using namespace std;

void solve() {
	
string s;
cin>>s;

map<int,int> freq;

for(int i=0;i<s.length();i++)
freq[s[i]]++;

if(freq.size()==1)
{
	cout<<"-1"<<endl;
	return;
}

int max_el,max_frq=INT_MIN;

for(auto it: freq)
{
	if(max_frq<it.second)
	{
		max_frq = it.second;
		max_el = it.first;
	}
}

// i got maximum frequency element and it's frequency

int k = 0;

for(auto it: freq)
{
	if(it.first!=max_el)
	k+=it.second;
}

if(k>=max_frq-1)
cout<<s.length()<<endl;

else
cout<< k*2 + (max_frq - k)*2<<endl;


}

int main() {
	
int t;
cin>>t;

while(t--)
solve();
	
	
return 0;

}