class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector<vector<int>> ans;
        for(int i = 0;i < nums.size()-2; i++){
            if(nums[i]>0)
                break;
            if(i>0&&nums[i]==nums[i-1]){
                continue;
            }
            int l=i+1;
            int r=nums.size()-1;
            while(r>l){
                if(nums[i]+nums[r]+nums[l]==0){
                    ans.push_back({nums[i],nums[r],nums[l]});
                    l++;
                    r--;
                    while(nums[l]==nums[l-1]&&l<r)
                            l++;
                }
                else if(nums[i]+nums[r]+nums[l]>0){
                    r--;
                }
                else
                    l++;
            }
        }
        return ans;
    }
};
