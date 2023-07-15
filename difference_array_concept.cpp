#include<bits/stdc++.h>
using namespace std;

#define int long long

signed main() {
	
	
int n;
cin>>n;

int arr[n];

for(int i=0;i<n;i++)
cin>>arr[i];

int d[n+1] = {0};

// first of all i need to create  a difference array
for(int i=0;i<n;i++)
{
	if(i==0)
	  d[i] = arr[i];
	  
	else
	  d[i] = arr[i] - arr[i-1];
	
}
// difference array has been created 

// now if i want to update my array then use this difference array

int l = 1, r = 4,x = 3;

d[l]+=x;
d[r+1] -=x;
// these two steps updated my array....

for(int i=0;i<n;++i)
{
	if(i==0)
	  arr[i] = d[i];
	  
	else
	{  arr[i] = d[i] + d[i-1];
	
	d[i] = d[i-1] + d[i];
	}
}

for(int i=0;i<n;i++)
cout<<arr[i]<<" ";




	
	
return 0;

}