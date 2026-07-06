class Solution {
   public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> ans;
        int n = nums.size();
        sort(nums.begin(), nums.end());

        for (int a = 0; a < n - 2; a++) {
            if (a != 0 && nums[a - 1] == nums[a]) continue;
            int b = a + 1;
            int c = n - 1;
            while (b < c) {
                int sum = nums[a] + nums[b] + nums[c];
                if (sum == 0) {
                    ans.push_back({nums[a], nums[b], nums[c]});
                    b++;
                    while (b < c && nums[b] == nums[b - 1]) b++;
                }
                if (sum < 0) {
                    b++;
                    while (b < c && nums[b] == nums[b - 1]) b++;
                } else {
                    c--;
                    while (b < c && nums[c] == nums[c + 1]) c--;
                }
            }
        }
        return ans;
    }
};
