class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> s(nums.begin(),nums.end());
        int maxi = 0;
        for(auto it:s){
            if(s.count(it-1)==0){
                int i = 0;
                while(s.count(it+i)!=0){
                    i++;    
                    maxi=max(i,maxi);
                }
            }
        }
        return maxi;
    }
};
