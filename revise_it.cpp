
#include<bits/stdc++.h>
using namespace std;


#define    ff        first
#define    ss        second
#define    ll        long long
#define    w(t)      ll t; cin >> t; while(t--)
#define    out       cout << "Case #";

 

const int MOD = 1e9 + 7;



void solve(){
	
	int n,k;
	cin>>n;
	
    
  vector <ll> x(n), y(n);
  for (ll i = 0; i < n; i++) cin >> x[i] >> y[i];
  
  cin>>k;

  map <pair <ll, ll>, ll> mp;
  ll ans = 0;

  for (ll i = 0; i < n; i++){
    for (ll j = 0; j <= k; j++){
      ll a = j;
      ll b = k - j;
      ll xb = (x[i] ^ a);
      ll yb = (y[i] ^ b);
      if(mp.count({xb, yb}))ans += mp[{xb, yb}];
    }

    mp[{x[i], y[i]}]++;
  }
  cout << ans << endl;
}  

int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);cout.tie(NULL);
  // w(t){
  //   solve();
  // }
  int t;
  cin>>t;
  
  while(t--)
  solve();
  return 0;
}