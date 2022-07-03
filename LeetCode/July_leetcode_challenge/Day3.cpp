class Solution {
public:
    vector<vector<vector<int>>> records;
    
    int wiggleMaxLength(vector<int>& nums) {
        
        int n = nums.size();
        int max_value = 0;
        for (int value: nums){
            max_value = max(max_value, value);
        }
        this->records = vector<vector<vector<int>>>(n, vector<vector<int>>(max_value + 2, vector<int>(2, -1)));
        int result = max(helper(nums, n, 0, max_value, 0), helper(nums, n, 0, -1, 1));
        return result;
    }
    /*
        sub-problem function:
    */
    int helper(vector<int>& nums, int n, int p, int prev_value, int state){
        
        if (p == n){
            return 0;
        }
        if (this->records[p][prev_value + 1][state] != -1){
            return this->records[p][prev_value + 1][state];
        }
        
        /*
        regular case:
        */
        int sub, result = 0;
        if (state == 0){
            for (int i = p; i < n; i++){
                if (nums[i] < prev_value){
                    sub = 1 + helper(nums, n, i + 1, nums[i], 1);
                    result = max(result, sub);
                }
            }            
        }
        else{
            for (int i = p; i < n; i++){
                if (nums[i] > prev_value){
                    sub = 1 + helper(nums, n, i + 1, nums[i], 0);
                    result = max(result, sub);
                }
            }
        }
        this->records[p][prev_value + 1][state] = result;
        return result;
    }
};
