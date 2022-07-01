Hm given boxtypes vector ko sort krlenge with respect to its second element with help of comparator function. then simply greedy approach as discussed below


// T.C=O(N)+O(N*logN)
// S.C=O(1)
class Solution {
public:
    static  bool comparator(vector<int>&v1 , vector<int>&v2)
    {
        return v1[1]>v2[1];
    }
    int maximumUnits(vector<vector<int>>& boxTypes, int truckSize) {
        sort(boxTypes.begin(),boxTypes.end(),comparator);
        // reverse(boxTypes.begin(),boxTypes.end());
        int ans=0;
        for(int i=0;i<boxTypes.size();i++){
            if(truckSize>=boxTypes[i][0]){
                ans+=boxTypes[i][0]*boxTypes[i][1];
                truckSize-=boxTypes[i][0];
            }
            else {
                ans+=abs(truckSize)*boxTypes[i][1];
                break;
            }
        }
        return ans;
    }
};
Do Upvote if you find it useful.
If you have any query , DM me on below Social media profile(usually active there) -
Instagram -"__asif18"
Twitter - "asif_iqubal01"
