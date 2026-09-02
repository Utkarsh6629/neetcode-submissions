class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        if(nums.size()==1||nums.size()==1)
            return nums;
        int fp = 1;
        int bp = 1;
        vector<int> forward(nums.size(),1);
        vector<int> backward(nums.size(),1);
        for(int i = 1; i<nums.size(); i++){
            int j = nums.size()-1-i;
            fp = fp*nums[i-1];
            bp = bp*nums[j+1];
            forward[i] = fp;
            backward[j] = bp;
        }
        vector<int> ans(nums.size(),1);
        for(int i = 0;i<nums.size();i++){
            ans[i] = forward[i]*backward[i];
        }
        return ans;
    }
};
//[1,1,2,8]
//[48,24,6,1]