#include <bits/stdc++.h>
using namespace std;
int sum(int a){
if( a<4) return 0;
a= a-2;
a=a/2;
 return (a*(a+1))/2;
}

int main() {
	// your code goes hiin
	int t ; cin>> t;
	while(t--){
	 int n; cin>>n;
	 cout<<sum(n)<<endl;
	}
	
	return 0;
}
