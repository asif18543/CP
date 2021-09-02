#include <bits/stdc++.h>
using namespace std;
int main(){
 int t; cin>>t;
 while(t--){
  int ct=0;
  int qw=0;
  int yu=0;
  int hj=0;
  int h,k;
  int arr[3];
  int add[3];
  for(int i=0;i<3;i++){
      cin>>arr[i];
      if(arr[i]==0){
       ct++;
      }
      else {
       qw++;
      }
  }
  h=ct;
  int l=qw;
  for(int i=0;i<3;i++){
      cin>>add[i];
      if(add[i]==0){
       yu++;
      }
      else {
       hj++;
      }
  }
  k=yu;
  int b=hj;
  if(h==k && l==b){
   cout<<"Pass"<<endl;
  }
  else{
   cout<<"Fail"<<endl;
  }
 
  
  
  
 }
}
