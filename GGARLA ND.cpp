#include<bits/stdc++.h>
using namespace std;

#define int long long

signed main() {
	

string s;
cin>>s;  // here's my string with me

// case I - for all uppercases

bool flag = true;
bool first_capital = false;

if(s[0]>='A' and s[0]<='Z')
{

for(int i =1;i<s.length();i++)
{
	if(s[i]>='A' && s[i]<='Z')
     continue;
     else
    { flag = false;
    break;}
    
}
if(flag == true)
{   
    for(int i =0;i<s.length();i++)
    cout<<char(tolower(s[i]));
	// cout<<tolower(s)<<endl;
	cout<<endl;
}
else
cout<<s<<endl;


}

else if(s[0]>='a' and s[0]<='z')
{
	
	for(int i =1;i<s.length();i++)
	{
		if(s[i]>='a' and s[i]<='z')
		{
			first_capital = true;
			break;
		}
	}
	
	if(first_capital)
	cout<<s<<endl;
	
	else
	{
		
	string k = s.substr(1);
	k = s[0] + k;
	
    cout<<char(toupper(k[0]));
    
    for(int i=1;i<k.length();i++)
    {
    	cout<<char(tolower(k[i]));
    }
    
    cout<<endl;
    
	}
	
}
else
{
	cout<<s<<endl;
}



return 0;

}