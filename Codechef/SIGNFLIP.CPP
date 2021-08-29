#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){
 ll t; cin>>t;
 while(t--){
  ll n,k; cin>>n>>k;
  vector<ll> arr(n);
  ll sum=0;
  for(ll i=0; i<n; i++){
   cin>>arr[i];
  }
  sort(arr.begin(), arr.end());
  for(ll i=0; i<k;i++){
       if(arr[i]<0){
       arr[i]  = arr[i]*(-1);
       }
  }
  for(ll i=0; i<arr.size(); i++){
   if(arr[i]>0){
    sum= sum+ arr[i];
   }
  }
  cout<<sum<<endl;
  
 }
}
