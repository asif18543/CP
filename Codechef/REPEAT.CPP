#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){

 int t; cin>>t; while(t--){
  int n,k,s; cin>>n>>k>>s;
  s=s-(n*n);
  cout<<s/(k-1)<<endl;
 }
}
