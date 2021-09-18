string addBinary(string a, string b) {
    
    int carry = 0;
    if(a.size() < b.size()){
        string temp = a;
        a = b;
        b = temp;
    }
    while(b.size()<a.size()){
        b = "0" + b;
    }
    string ans;
    for(int i=a.size()-1;i>=0;i--){
        int add = (a[i]-'0') + (b[i]-'0') + carry;
        if(add==3){
            ans = "1" + ans;
            carry = 1;
        }else if(add==1){
            ans = "1" + ans;
            carry = 0;
        }else if(add==0){
            ans = "0" + ans;
            carry=0;
        }else if(add==2){
            ans = "0" + ans;
            carry = 1;
        }
    }
    if(carry == 1){
        ans = "1" + ans;
    }
        return ans;
}
