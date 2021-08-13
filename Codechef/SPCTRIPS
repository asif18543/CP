#include<bits/stdc++.h>
using namespace std;
int main(){
    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        int ans=0;
       for(int i=1; i<=n; i++){
           for(int j = i; j<=n; j=j+i){
               for(int k =i; k<=n; k+= j){
                   if(k%j==i && j%i==0){
                       ans++;
                   }
               }
           }
       }
       cout<<ans<<endl;
    }
    return 0;
}
