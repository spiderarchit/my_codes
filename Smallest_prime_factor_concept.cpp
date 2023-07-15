#include<bits/stdc++.h>
using namespace std;

vector<multiset<int>>present(1e6);
vector<int> spf;


// this function will form spf which contains smallest prime factors...

// complexity won't be problem here....as only prime numbers will 
// be traversed....

void fn() {

// smallest prime factors of all numbers..here
spf.assign(1e6+1,0);

for(int i=0;i<=1e6;i++)  spf[i] = i;
for(int i=2;i<=1e6;i++)
{   if(spf[i]==i)
   {
	for(int j = i ;j<=1e6;j+=i)
	 {
	 	spf[j] = min(spf[j],i);
	 }
}
	
}

}

// won't be a problem for time complexity....it will be approx
// o(logn)

vector<int> prime_fact(int x)
{
 
 vector<int> ans;
 
 while(x>1)
 {
 	int j = spf[x];
 	while(x%j==0)
 	x/=j;
 	
 	ans.push_back(j);
 		
 }
  return ans;
  
}

void solve() 
{
 
 // fn();
 
 int n;
 cin>>n;
 
 vector<int> arr;
 
 // input array
 for(int i =0;i<n;i++)
 {
 	int x;
 	cin>>x;
 	
 	arr.push_back(x);
 }
 
 present[1].clear();
 set<int> used;
 
 for(int x: arr)
 {
   // storing the elements....
   present[1].insert(x);
   
   vector<int> fact = prime_fact(x); // recived in log(n) time..
   
   for(int j: fact)
   {
   	present[j].insert(x); // inserting corresponding to prime number
    used.insert(j);
   } 
   	
 }
 
 int q;
 cin>>q;
 
 while(q--)
 {
 	
    int x;
 	cin>>x;
 	
 	vector<int> v = prime_fact(x);
 	
 	int min_el = INT_MAX;
 	for(int j : v)
 	{
 	  if(present[j].size()>0)
 	  {
 	  	min_el = min(min_el,*present[j].begin());
 	  }
 	}
 	
 	if(min_el==INT_MAX)
 	{
 		min_el = *present[1].begin();
 	}
 	
 	// now i have erase this element from everywhere....
 	present[1].erase(present[1].find(min_el));
 	
 	vector<int> v1 = prime_fact(min_el);
 	
 	for(int j : v1)
 	{
 		present[j].erase(present[j].find(min_el));
 		
 	}
 	
 	cout<<min_el<<" ";
 	
 }
 
 for(auto i:used)
 present[i].clear();
 
 cout<<endl;
	
}


int main() {
	
fn();
int t;
cin>>t;

while(t--);
solve();
	
return 0;

}