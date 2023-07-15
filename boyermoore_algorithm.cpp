#include<bits/stdc++.h>
using namespace std;

int main() {
	
int n;
cin>>n;

int arr[n];

for(int i=0;i<n;i++)
cin>>arr[i];

int element_1 = arr[0];
int element_2 = 0;
int c_element1 = 1;
int c_element2 = 0;

for(int i =1;i<n;i++)
{
   if(arr[i]==element_1)
   {
   	c_element1++;
   }
   else if(arr[i]==element_2)
   {
   	c_element2++;
   }
   else if(c_element1==0)
   {
   	element_1 = arr[i];
   	c_element1 = 1;
   }
   else if(c_element2==0)
   {
   	element_2=arr[i];
   	c_element2 = 1;
   }
   else
   {
   	c_element1-=1;
   	c_element2-=1;
   }
   }

int cnt1= 0;
int cnt2 = 0;

for(int i =0;i<n;i++)
{
	if(element_1==arr[i])
	cnt1++;
	if(element_2 == arr[i])
	cnt2++;
}

if(cnt1<n/3 and cnt2<n/3)
cout<<"No Majority Elements";

else if(cnt1>n/3 and cnt2>n/3)
cout<<element_1<<" "<<element_2;

else if(cnt1>n/3)
cout<<element_1;
else if(cnt2>n/3)
cout<<element_2;

return 0;
}