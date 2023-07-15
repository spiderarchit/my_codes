#include<bits/stdc++.h>
using namespace std;
int sum = INT_MAX;

// wong it won't work....it's not even the question that can be 
// solved with the help of recursion..

void ans(string k,int i,string s,int n)
{
	if(i==n)
   {   
      
      int arr[10] = {0};
      int total;
      string alag = "";
      
      for(int j = 0;j<s.length();j++)
      arr[s[j]-'0']++;
      
      for(int j = 0;j<k.length();j++)
      {
        if(arr[k[j]-'0']==0)
        {  
        	alag += (k[j]);
        }
        else
        {
          arr[k[j]-'0']=arr[k[j]-'0']-1;
        }
        
      }
      
      if(alag.length()!=0 and s.length()!=0)
      {  
        total = stoi(alag) + stoi(s);
        // cout<<total<<endl;
      }
      
      sum = min(sum,total);
   
   
       return;
   }

	

// recursive case
 ans(k,i+1,s+k[i],n);
 ans(k,i+1,s,n);

	
}

void ans_reverse(string k,int i,string s,int n)
{
	if(i==n)
   {   

      int arr[10] = {0};
      int total;
      string alag = "";
      
      for(int j = 0;j<s.length();j++)
      arr[s[j]-'0']++;
      
      for(int j = 0;j<k.length();j++)
      {
        if(arr[k[j]-'0']==0)
        {  
        	alag += (k[j]);
        }
        else
        {
          arr[k[j]-'0'] = arr[k[j]-'0']-1;
        }
        
      }
      
      
      if(alag.length()!=0 and s.length()!=0)
      { 
        total = stoi(alag) + stoi(s);
      }
      
      sum = min(sum,total);

       return;
   

	}

// recursive case
  ans_reverse(k,i+1,s+k[i],n);
  ans_reverse(k,i+1,s,n);
}

int main() {
	
int num;
cin>>num;

string k = to_string(num);

int n = k.length();

ans(k,0,"",n);

string h = "";

for(int i = k.length()-1;i>=0;i--)
h = h + k[i];

ans_reverse(h,0,"",n);

cout<<sum<<" ";
	
	
	
return 0;

}