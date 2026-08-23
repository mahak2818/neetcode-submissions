class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        if(strs.empty()) return {};
        unordered_map<string,vector<string>>mp;
        for(auto s:strs){
            string value=s;
            sort(value.begin(),value.end());
            mp[value].push_back(s);
        }
        vector<vector<string>>ans;
        for(auto key:mp){
            ans.push_back(key.second);
        }
        return ans;
    }
};
