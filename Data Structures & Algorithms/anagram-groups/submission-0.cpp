class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> ans_map;
        for(string s : strs){
            string copy = s;
            sort(copy.begin(), copy.end());

                ans_map[copy].emplace_back(s);

          
        }
         vector<vector<string>> result;
        for(auto& pair : ans_map) {
            result.push_back(pair.second);
        }
        
        return result;

    }
};
