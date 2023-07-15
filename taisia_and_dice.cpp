#include<bits/stdc++.h>
using namespace std;

int main() {
	
int t;
cin>>t;

while(t--)
{

int n,s,r;
cin>>n>>s>>r;

if(s<=r)
return -1;

int max_el = s-r;

int arr[n-1];

memset(arr,0,sizeof(arr));

int i=0;
while(r--)
{    
    if(i==n-1)
    i=0;
    
	arr[i]+=1;
	i++;
}

for(int i =0;i<n-1;i++)
cout<<arr[i]<<" ";

cout<<max_el<<endl;

}
	
return 0;

}