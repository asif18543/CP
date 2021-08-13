#include <bits/stdc++.h>
#include<unordered_map>
using namespace std;
int main(){
    int t; cin>>t;
    while(t--){
        int x;
        unordered_map<int,int> map;
        for(int i = 0; i<4; i++){
            cin>>x;
            map[x]++;
        }
        if(map.size() == 4 || map.size()==3){
            cout<<'2'<<endl;
        }
        else if(map.size()==1){
            cout<<'0'<<endl;
        }
        else{
            for(auto x: map){
                if(x.second %2==0){
                    cout<<'2'<<endl;
                }
                else{
                    cout<<'1'<<endl;
                   
                }
                 break;
            }
        }
    }
    return 0;
}
