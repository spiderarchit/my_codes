#include<bits/stdc++.h>
using namespace std;

#define inf INT_MAX
#define ini INT_MIN

int main() {
	
int n;
cin>>n;

vector<int> heights;

for(int i=0 ;i<n;i++)
{
	int x;
	cin>>x;
	heights.push_back(x);
}

int min_element = inf;
int max_element = ini;
int min_idx;
int max_idx;

for(int i =0;i<n;i++)
{
   if(min_element>=heights[i])
   {
   	min_element= heights[i];
   	min_idx = i;
   }
    if(max_element<heights[i])
    {
    	max_element = heights[i];
    	max_idx = i;
    }
}


if(min_idx<max_idx)
{
	cout<<(max_idx) + ((n-1)-min_idx-1);
}
else
{
	cout<<((n-1)-min_idx) + max_idx;
}
	
return 0;
	
}