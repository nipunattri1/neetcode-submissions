class Solution {
   public:
    bool isPal(string s1, int left, int right, vector<int> count) {
        vector<int> copy(count);
        while (left <= right) {
            copy[s1[left] - 'a']--;
            left++;
        }

        for (int i : copy) {
            if (i != 0) return false;
        }
        return true;
    }
    bool checkInclusion(string s1, string s2) {
        vector<int> count(26, 0);
        for (char i : s1) {
            count[i - 'a']++;
        }

        for (int right = s1.length() - 1; right < s2.length(); right++) {
            int left = right - s1.length() + 1;
            if (isPal(s2, left, right, count)) return true;
        }
        return false;
    }
};
