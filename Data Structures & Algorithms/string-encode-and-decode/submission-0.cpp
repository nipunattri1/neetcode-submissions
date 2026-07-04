class Solution {
public:

    string encode(vector<string>& strs) {
        string enc  = "";
        for(int i = 0; i < strs.size()  ; i++){
            // enc += strs[i];

            enc +=  to_string(strs[i].size()) + "#" + strs[i];
        }
        return enc;
    }

    vector<string> decode(string s) {
        vector<string> ans;
        int i = 0;
        while (i < s.size()){
            size_t delim_pos = s.find('#', i);

            int size = stoi(s.substr(i, delim_pos - i));
            
            std::string str = s.substr(delim_pos + 1, size);
            ans.push_back(str);
            
            i = delim_pos + 1 + size;         
        }
        return ans;
    }
};
