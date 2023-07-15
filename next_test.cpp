#include<bits/stdc++.h>
using namespace std;

int main() {
	
int n;
cin>>n;

unordered_set<int> s;

for(int i=0;i<n;i++)
{
	int x;
	cin>>x;
	s.insert(x);
}

int count = 1;

while(true)
{
	if(s.find(count)==s.end())
	{
		cout<<count<<endl;
		break;
	}
  count++;
}
	
return 0;
	
}