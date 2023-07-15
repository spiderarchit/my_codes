#include<bits/stdc++.h>
using namespace std;

int main() {
	
int m,n;
cin>>m>>n;

char arr[1000][1000];
bool eaten[1000][1000]={false};
int count = 0;

for(int i =0;i<m;i++)
{
	for(int j =0;j<n;j++)
	cin>>arr[i][j];
}

for(int i =0;i<m;i++)
{  
    bool flag = true;

	for(int j =0;j<n;j++)
	{
	 if(arr[i][j]=='S')
	 {  
	 	flag = false;
	 	break;
	 }
	}
	
	if(flag)
	{
		for(int j =0;j<n;j++)
		eaten[i][j] = true;
		

	
	}
	
}



for(int j=0;j<n;j++)
{  
    bool flag = true;

	for(int i =0;i<m;j++)
	{
	 if(arr[i][j]=='S')
	 {
	 	flag = false;
	 	break;
	 }
	}
	if(flag)
	count+=m;
	
}
cout<<count<<endl;
	
	
return 0;

}