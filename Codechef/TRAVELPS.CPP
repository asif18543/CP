#define ll long long int
int main(){
 ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
 int t; cin>>t;
 while(t--){
  int n,a,b;
  
  cin>>n>>a>>b;
  int zero=0;
  
  string st;
  cin>>st;
   for(int i=0;i<n;i++){
    if(st[i]=='0'){
     zero=zero +a;
    }
    else{
     zero= zero +b;;
    }
   }
   
   
  
  
  cout<<zero<<endl;
  
 }
}
