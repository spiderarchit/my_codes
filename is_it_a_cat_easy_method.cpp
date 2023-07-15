#include<bits/stdc++.h>
using namespace std;

void solve() {

int n;
cin>>n;

string s;
cin>>s;

vector<int> ans;
ans.push_back(tolower(s[0]));
for(int i=1;i<n;i++)
{
if(tolower(s[i])!=tolower(s[i-1]))
ans.push_back(tolower(s[i]));
}

if(ans.size()==4 and ans[0]=='m' and ans[1]=='e' and ans[2]=='o' and ans[3]=='w')
cout<<"YES"<<endl;
else
cout<<"NO"<<endl;


}

int main() {

int t;
cin>>t;

while(t--)
solve();

return 0;

}