#include<bits/stdc++.h>
using namespace std;

#define int long long 
#define inf INT_MAX
#define linf INT_MIN

const int mod = 1e9 + 7;

void sync()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
}


void solve() {

int n;
cin>>n;

int arr[100000]={0};

for(int i=1;i<=10;i++)
{
	arr[i] = 4;
}

int total = n - 10;

if(total<0)
cout<<0;
else if(total<10 and total!=1 and total!=11)
{
	cout<<arr[total];
}
else if(total == 10)
{
	cout<<15;
}
else if(total==1 || total==11)
{
	cout<<4;
}
else
cout<<0;


	
}

signed main() {
		
sync();
solve();
	
return 0;
	
}