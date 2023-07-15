#include<bits/stdc++.h>
using namespace std;

int max_ans(string s[10000],int n,int i,string k)
{
// base case 
if(i==n)
{

int*arr = new int[26];

memset(arr,0,26);

for(int h =0;h<k.length();h++)
{
   if(arr[k[h]-'a']==1)
   return 0;
   
   arr[k[h]-'a']++;
}

// for(int h=0;h<26;h++)
// {
	// if(arr[h]>1)
	// return 0;
// }

return k.length();
}
   
   
// recursive case
int y=INT_MIN;
if(s[i].length() + k.length() <=26)
 y = max_ans(s,n,i+1, k + s[i]);
 
int z = max_ans(s,n,i+1,k);

return max(y,z);
   
}

void solve() {
	
int n;
cin>>n;

string s[n];

for(int i =0;i<n;i++)
{
	cin>>s[i];
}

cout<<max_ans(s,n,0,"");

}

int main() {
	
solve();
	
return 0;

}