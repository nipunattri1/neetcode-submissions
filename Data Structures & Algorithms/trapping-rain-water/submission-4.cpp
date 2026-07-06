class Solution {
   public:
    int trap(vector<int>& height) {
        int ans = 0;
        int temp = 0;
        int left_wall = 0;
        for (int i = 0; i < height.size(); i++) {
            if (height[i] < height[left_wall]) {
                temp += height[left_wall] - height[i];
            } else {
                left_wall = i;
                ans += temp;
                temp = 0;
            }
        }
        int right_wall = height.size()-1;
        temp = 0;
        for (int i = height.size() - 1; i >= left_wall; i--) {
            if (height[i] < height[right_wall]) {
                temp += height[right_wall] - height[i];
            } else {
                right_wall = i;
                ans += temp;
                temp = 0;
            }
        }
        return ans;
    }
};
