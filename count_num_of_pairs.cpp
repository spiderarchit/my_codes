#include<bits/stdc++.h>
using namespace std;

void solve() {

int n,k;
cin>>n>>k;

string s;
cin>>s;

string lower_case= "";
string upper_case= "";
int ans = 0;

for(int i=0;i<n;i++)
{
	if((int)s[i]>=97 and (int)s[i]<=122)
	lower_case+=s[i];
	
	if((int)s[i]>=65 and (int)s[i]<=90)
	upper_case+=s[i];
}

sort(lower_case.begin(),lower_case.end());
sort(upper_case.begin(),upper_case.end());

map<char,int> extra_char;

int i=0;
int j=0;

while(i<lower_case.size() and j<upper_case.size())
{
	if(lower_case[i] == tolower(upper_case[j]))
	{
		i++;
		j++;
		ans++;
	}
	else
	{
		if(lower_case[i]<tolower(upper_case[j]))
		extra_char[lower_case[i++]]++; 
		else
		extra_char[upper_case[j++]]++;
    }
}

while(i<lower_case.size())
{
	extra_char[lower_case[i++]]++;
}
while(j<upper_case.size())
{
	extra_char[upper_case[j++]]++;
}

int count =0;

for(auto it:extra_char)
{
	count+=it.second/2;
}

cout<<min(k,count)+ans<<endl;


}

int main() {
	
int t;
cin>>t;

while(t--)
solve();
	
return 0;
}