class Solution {
public:
    bool isPalindrome(string s) {
        int left = 0;
        int right = s.size()-1;
        while (left < right){
            if (!isalnum(static_cast<int>(s[left]))){
                left++;
                continue;
            }
            if (!isalnum(static_cast<int>(s[right]))){
                right--;
                continue;
            }
            if (tolower(static_cast<int>(s[left])) != tolower(static_cast<int>(s[right])))
                return false;
            left++;
            right--;
        }
        return true;
    }
};
