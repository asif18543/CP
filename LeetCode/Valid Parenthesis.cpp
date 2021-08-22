class Solution {
public:
    unordered_map<char , int> mp= {{'(',-1}, {'{',-2} , {'[',-3},{')',1}, {'}',2} , {']',3}};
    bool isValid(string s) {
        stack<char> st;
        for(char brackets:s){
            if(mp[brackets]<0){
                st.push(brackets);
            }
            else{
                if(st.empty()){
                    return false;
                }
                char top = st.top();
                st.pop();
                if(mp[top] + mp[brackets] != 0){
                    return false;
                }
            }
        }
         if(st.empty())
         { return true;}
    else {return false;}
    }
   
};
