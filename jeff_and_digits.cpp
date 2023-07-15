#include<bits/stdc++.h>
using namespace std;

int main() {

int n;
cin>>n;

int zeros = 0;
int fives = 0;

for(int i=0;i<n;i++)
{
	int x;
	cin>>x;
	
	if(x==5)
	 fives++;
	if(x==0)
	zeros++;
}

int cnt;

if(zeros==0)
cout<<-1<<endl;

else if(fives<9)
cout<<0<<endl;

else if(fives>=9)
{cnt = fives/9;
  
for(int i =1;i<=cnt*9;i++)
{
	cout<<5;
}
for(int i =1;i<=zeros;i++)
{
	cout<<0;
}

cout<<endl;

}
	
	
	
return 0;
	
}