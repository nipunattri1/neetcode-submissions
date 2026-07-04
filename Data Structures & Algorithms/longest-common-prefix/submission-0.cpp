class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string common = "";
        int min_val = INT_MAX;
        for (string s: strs){
            min_val = min(min_val, static_cast<int>(s.size()));
        }
        for (int i = 0; i < min_val; i++){
            int prev = static_cast<int>(strs[0][i]);
            bool breakit = false;
            for (int j = 0; j < strs.size() ; j++){
                int curr = static_cast<int>(strs[j][i]);
                if (curr != prev){
                    breakit = true;
                    break;
                }
                if (j == strs.size()-1){
                    common += strs[j][i];
                }
            }
            if (breakit) break;
        }
        return common;
    }
};