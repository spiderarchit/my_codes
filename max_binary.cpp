#include <bits/stdc++.h>
using namespace std;

int main() {
	
	int t;
	cin>>t;
	
	while(t--)
	{
	    int n;
	    cin>>n;
	    string s;
	    cin>>s;
	    
	    int max_cz = 0;
	    int maxzeroes = 0;
	    int ones = 0;
	    for(int i=0;i<n;i++)
	    {
	       if(s[i]=='0')
	       {maxzeroes++;
	       max_cz = max(max_cz,maxzeroes);
	       }
	       else
	       {
	           max_cz = max(max_cz,maxzeroes);
	           maxzeroes = 0;
	           ones++;
	       }
	    }
	    
	    if(ones == n)
	    cout<< ones/2<<endl;
	    else
	    cout<<max_cz + 1<<endl;
	   


	    
	    
	}
	return 0;
}
