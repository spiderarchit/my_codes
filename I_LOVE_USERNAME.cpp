#include<bits/stdc++.h>
using namespace std;

#define inf INT_MAX
#define linf INT_MIN

int main() {
	

int n;
cin>>n;

int arr[n];
int count = 0;

for(int i =0;i<n;i++)
cin>>arr[i];

int maximum = arr[0];
int minimum = arr[0];
for(int i =1;i<n;i++)
{
	if(arr[i]>maximum)
	{maximum = arr[i];
	 count++;}
	if(arr[i]<minimum)
	{
		minimum = arr[i];
		count++;
	}
}

cout<<count<<endl;
	
return 0;

}