BRUTE FORCE

Simply we sort the given horizontal and vertical cuts vector then hm usme 0 and h & w push krdenge repectively taaki hm first nd last wale ka difference le ske 0 se nd h &w se repectively.
we use 2 dummy vector to store the differences of both given vectors.
ab simply dono ke max elements ko multiply krke return kr dena h cause whi horizontal nd vertical me max area posses krenge.
T.C=O(N logN) + O(N)
S.C=O(N) +O(N)

#define modi 1e9+7
class Solution {
public:
    int maxArea(int h, int w, vector<int>& hz, vector<int>& vt) {
        vector<long long>vrt,hzt;
       
        hz.push_back(h);
        vt.push_back(w);
        hz.push_back(0);
        vt.push_back(0);
         sort(hz.begin(),hz.end());
        sort(vt.begin(),vt.end());
        for(int i=0;i<hz.size()-1;i++){
            hzt.push_back((long long)hz[i+1]-hz[i]);
        }
        for(int i=0;i<vt.size()-1;i++){
            vrt.push_back((long long)vt[i+1]-vt[i]);
        }
        sort(hzt.begin(),hzt.end());
        sort(vrt.begin(),vrt.end());
        long long ans= (vrt[vrt.size()-1]*hzt[hzt.size()-1]);
        return (ans)%1000000007;
    }
};
OPTIMAL

Logic is same here, instead of using two dummy vectors for storing differences we can use some sort of kadanes algorithm to know the maxi width nd height in horizontal nd vertical cuts respectively.
T.C=O(N logN) + O(N)
S.C=O(1)

#define modi 1e9+7
class Solution {
public:
    int maxArea(int h, int w, vector<int>& hz, vector<int>& vt) {
        vector<long long>vrt,hzt;
       
        hz.push_back(h);
        vt.push_back(w);
        hz.push_back(0);
        vt.push_back(0);
         sort(hz.begin(),hz.end());
        sort(vt.begin(),vt.end());
        long long max_length = 0, max_breadth = 0;
        
        for(int i = 1 ; i< hz.size();i++){
             max_breadth = max(max_breadth, (long long)hz[i]-hz[i-1]);
        }
        
        for(int i = 1 ; i< vt.size();i++){
             max_length = max(max_length, (long long)vt[i]-vt[i-1]);
        }
        
        long long ans = max_length*max_breadth;
        return (ans)%(1000000007);
    }
};
Do Upvote if you find it useful.
If you have any query , DM me on below Social media profile(usually active there) -
Instagram -"__asif18"
Twitter - "asif_iqubal01"
