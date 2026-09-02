class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
      unordered_set<int> a;
      for(auto it : nums){
        if(a.find(it)!=a.end())
            return true;
        a.insert(it);
      }  
      return false;
    }
};