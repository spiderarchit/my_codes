#include<bits/stdc++.h>
using namespace std;

int main() {
	
string s;
string s1;

cin>>s;
cin>>s1;

bool flag = true;

for(int i=0;i<s.length();i++)
{
	if(tolower(s[i])>tolower(s1[i]))
	{
		cout<<"1";
		flag = false;
		break;
	}
	else if(tolower(s[i])<tolower(s1[i]))
	{
		cout<<"-1";
		flag = false;
		break;
	}
	
	
}

if(flag==true)
{
	cout<<"0";
}
	
return 0;

}