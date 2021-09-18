class Solution {
public:
    int countQuadruplets(vector<int>& nums) {
        int l=nums.size();
        int count=0;
        for(int i=0; i<l; i++){
            for(int j=i+1; j<l; j++){
                for(int k=j+1; k<l; k++){
                    int sum = nums[i] + nums[j] + nums[k];
                    for (int m = k+1; m < nums.size(); ++m) {
                    if(sum==nums[m])
                        count++;
                        }
                    }
                }
            
        }
        return count;
    }
};
