class Solution {
public:
    bool isAnagram(string s, string t) {
        int chars[26] = {0};
        for(char i : s){
            int index = static_cast<int>(i) - 'a';
            chars[index]++;
        }
        for(char i : t){
            int index = static_cast<int>(i) - 'a';
            chars[index]--;
        }
        for (int i : chars){
            if (i != 0){
                return false;
            }
        }
        return true;
    }
};
