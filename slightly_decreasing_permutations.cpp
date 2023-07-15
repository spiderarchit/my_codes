#include<bits/stdc++.h>
using namespace std;

bool my_comparator(int a,int b)
{
	return a>b;
}


void solve(){
	
int n,k;
cin>>n>>k;

int arr[n];

for(int i =0;i<n;i++)
{
	arr[i] = i+1;
}

sort(arr,arr+n);  // o(nlogn)

sort(arr,arr+k+1,my_comparator);

for(int i =0;i<n;i++)
cout<<arr[i]<<" ";
	
}

int main() {

solve();
	
return 0;
	
}