class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> he;
        vector<vector<int>> f(nums.size()+1);
        for(auto &it:nums){
            he[it]++;
        }
        for(auto &it:he){
            f[it.second].push_back(it.first);
        }
        vector<int>ans;
        for(int i=f.size()-1;i>0;i--){
            for(int it:f[i]){
                ans.push_back(it);
                if (ans.size()==k)
                    return ans;
            }
        }
        return ans;
    }
};
