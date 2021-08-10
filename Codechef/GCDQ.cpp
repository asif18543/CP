#include<bits/stdc++.h>
using namespace std;
int main()
{
	int T;cin>>T;
	while(T--){
		int N,Q;cin>>N>>Q;
		int arr[N];
		for(int i=1;i<=N;i++){
			cin>>arr[i];
		}
		int arr1[N+10]={0},arr2[N+10]={0};
		int gcd1=0;
		for(int i=1;i<=N;i++){
			gcd1=__gcd(gcd1,arr[i]);
			arr1[i]=gcd1;
		}
		int gcd2=0;
		for(int i=N;i>=1;i--){
			gcd2=__gcd(gcd2,arr[i]);
			arr2[i]=gcd2;
		}
		while(Q--){
			int L,R,finalgcd=0;
			cin>>L>>R;
			finalgcd=__gcd(arr1[L-1],arr2[R+1]);
			cout<<finalgcd<<endl;
		}
}}
