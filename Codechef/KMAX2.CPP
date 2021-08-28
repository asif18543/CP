#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){
 ll t; cin>>t;
 while(t--){
  ll  n,k; cin>>n>>k;
  ll arr[n];
  ll maximum = -1;
  for(ll i=0;i<n;i++){
   cin>>arr[i];
   maximum = max(arr[i] , maximum);
  }
   
   ll ans=0;
   for(int i = k-1;i<n; i++){
   if(arr[i]== maximum){
    ans = ans + (n-i);
   }
   }
   cout<<ans<<endl;
 }
 return 0;
}
