#include<bits/stdc++.h>
using namespace std;

// this is a way to find the GCD of two numbers..
int gcd(int a, int b) 
{
	if(a==0)
	return b;
	
	int x = gcd(b%a,a);
	
	return x;
}

int main() {
	
	
int a,b;
cin>>a>>b;

cout<<gcd(a,b)<<endl;

return 0;

}