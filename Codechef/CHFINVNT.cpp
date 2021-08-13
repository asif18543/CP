#include<bits/stdc++.h>
#include <iostream>
#define inputv(x,n) for(ll i=0; i<n; i++) cin>>x[i];
using namespace std;

typedef long long ll;


int main() {
	ll t; cin>>t;
	while(t--){
	    ll N,p,k;
	    cin>>N>>p>>k;
	    ll ans;
	    ll mod_p = p%k;
	    if(N%k <=mod_p - 1){
	        ans = (N%k)*(N/k+1) + (mod_p -  N%k)*(N/k);
	        ans+= (p/k+1);
	    }
	    else{
	        ans=(mod_p)*(N/k+1);
	        ans+= (p/k+1);
	    }
	    cout<<ans<<endl;
	}
	return 0;
}
