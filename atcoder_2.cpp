#include<bits/stdc++.h>
using namespace std;

int main() {
	
int n,q;
cin>>n>>q;
int red[10000] = {0};
int yellow[10000] = {0};
while(q--)
{
	int val;
	int player;
	
	cin>>val>>player;
	
	if(val==1)
	{    
	     yellow[player]=yellow[player]+1;
		// player received yellow card
		
	}
	else if(val==2)
	{    
	     red[player]=red[player]+1;
		// player received red card
	}
	else if(val==3)
	{    
	     if( yellow[player]>=2 || red[player]>=1)
	     {
	     	cout<<"Yes"<<endl;
	     }
	     else
	     {  
	     	cout<<"No"<<endl;
	
	     }
		// output
	}

	
	
}
	
	
return 0;
}