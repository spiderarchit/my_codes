

// dynamic programming approach...it is not working 

#include<bits/stdc++.h>
using namespace std;

#define int long long

int ans = 0;


int recursive(vector<int>arr, int n)

{

 int count = 0, sum = 0;
 int ans = 0;
 
 for(int i= 0;i<n;i++)
  { 
  	for(int j = 0;j<n;j++)
  	  {
  	  	
  	  }
  }
	
	
	
}

void recursive(vector<int>arr, int n , int sum , int count,int i)

{

// base case 
if(sum<0)
{
	ans = max(ans,count - 1);
	return;
}

if(i==n)
{
	ans = max(ans,count);
	return;
}


// recursive case

recursive(arr, n, sum+arr[i],count + 1,i + 1);

recursive(arr, n , sum ,count, i+1);
	
	
}

int recur(vector<int>&arr, int n, int sum ,int count ,int i,vector<vector<int>>&dp)
{

if(sum<0)
{
// cout<<count-1<<endl;
return count-1;
}


if(i==n)
{
if(sum<0)
return count-1;

return count;
}

if(dp[i][count]!=INT_MIN)
{
// cout<<dp[i][count]<<endl;
return dp[i][count];
}


int first = recur(arr, n ,sum+arr[i],count+1, i + 1,dp);
int second = recur(arr, n, sum ,count , i+1,dp);

return dp[i][count] = max(first,second);	
	
}


void solve() {
	
int n;
cin>>n;

vector<int> arr;

for(int i =0;i<n;i++)
{
	int x;
	cin>>x;
	
	arr.push_back(x);
	
}	

// vector<vector<int>>dp(n,vector<int>(-1,n));/

// recursive(arr,n,0 , 0,0);

// cout<<ans<<endl;

vector<vector<int>>dp(n+1,vector<int>(n+1,INT_MIN));
cout<<recur(arr, n, 0,0,0,dp);
	
}

signed main() {
	
solve();
	
	
return 0;

}