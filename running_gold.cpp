#include<bits/stdc++.h>
using namespace std;

#define int long long

void solve()
{
	
  int n;
  cin>>n;
  int k = n;
  
  // you can't push back here....
  
  vector<vector<int>>v(n+1,vector<int>(5));
  
  int q = 0;
  
  while(n--)
  {  
     for(int i =0;i<5;i++)
     {
       int x;
       cin>>x;
       v[q][i] = (x);
     }
     q++;
  }
  
  n = k;
  
  int winner = 0;
  int i = 1;
  
  while(i<n)
  {
  	
  	vector<int> until = v[winner];
  	vector<int>now = v[i];
  	
  	int player1 = 0;
  	int player2 = 0;
  	
  	for(int j=0;j<5;j++)
  	{
       if(until[j]>now[j])
       player2++;
       else
       player1++;
  	}
  	
     if(player1<player2)
     winner = i;
     
     // cout<<winner<<endl;
     
  	i+=1;
  	
  }
  
  // now let's verify it again 
  
  for(int i=0;i<n;i++)
  {
  	if(i!=winner)
  	{
    int player1 = 0;
  	int player2 = 0;
  	
  	
  	for(int j=0;j<5;j++)
  	{
       if(v[winner][j]>v[i][j])
       player2++;
       else
       player1++;
  	}
  	
     if(player1<player2)
     {
     	cout<<"-1"<<endl;
         return;
     }
     
     }
  	
  }
  
  cout<<winner+1<<endl;
  
  // for(int i =0;i<k;i++)
  // {
  	// for(int j=0;j<5;j++)
  	// {
  		// cout<<v[i][j]<<" ";
  	// }
  	// cout<<endl;
  // }
   
	
}

signed main() {
	
int t;
cin>>t;

while(t--)
solve();
	
	
	
return 0;

}