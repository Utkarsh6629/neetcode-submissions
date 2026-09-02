class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string,vector<string>> mp;
        for(auto it:strs){
            vector<int> a(26,0);
            for(auto its:it){
                a[its-'a']++;
            }
            string key = to_string(a[0]);
            for(int i=1;i<a.size();i++){
                key+=','+to_string(a[i]);
            }
            mp[key].push_back(it);
        }
        vector<vector<string>> ans;
        for(auto it:mp){
            ans.push_back(it.second);
        }
        return ans;
    }
};
