#include<bits/stdc++.h>
using namespace std;

void solve() {

int n,k;
cin>>n>>k;

string s;
cin>>s;

int arr1[26] = {0};
int arr2[26] = {0};
int ans = 0;
for(int i=0;i<n;i++)
{
  if(s[i]>='A' and s[i]<='Z')
  arr2[s[i]-'A']++;
  if(s[i]>='a' and s[i]<='z')
  arr1[s[i]-'a']++;
}

for(int i=0;i<26;i++)
{
    ans += min(arr1[i],arr2[i]);
    int k = min(arr1[i],arr2[i]);
    arr1[i]-=k;
    arr2[i]-=k;
}

int count =0;
for(int i =0;i<26;i++)
{
    count+= arr1[i]/2 + arr2[i]/2;
}

ans += min(count,k);

cout<<ans<<endl;
}

int main() {

int t;
cin>>t;

while(t--)
solve();

return 0;

}