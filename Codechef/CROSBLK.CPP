#include <bits/stdc++.h>
using namespace std;
#define ll long long int 
int main(){
 ios::sync_with_stdio(false); cin.tie(0);
 ll t; cin>>t;
 while(t--){
  ll n; cin>>n;
  vector<ll> arr(n);
  for(ll i=0; i<n; i++){
   cin>>arr[i];
  }
  ll max = -1;
  ll ans=0;
  for(ll i=n-1; i>0;i--){
   if(arr[i]>max){
    
    ans++;
    max = arr[i];
   }
  }
  if(arr[0]>=max) cout<<ans<<endl;
  else cout<<-1<<endl;
 }
}
