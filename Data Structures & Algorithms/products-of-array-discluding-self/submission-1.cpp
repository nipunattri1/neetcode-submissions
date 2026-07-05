class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        const int n = nums.size();
        vector<int> fprefix(n, 0);
        vector<int> rprefix(n, 0);
        fprefix[0] = nums[0];
        rprefix[n-1] = nums[n-1];
        for (int i = 1; i < n; i++){
            fprefix[i] = fprefix[i-1] * nums[i];
            if (fprefix[i] == 0) break;
        }
        for (int i = 1; i < n; i++){
            rprefix[n-i-1] = rprefix[n-i] * nums[n-i-1];
            if (rprefix[n-i-1] == 0) break;
        }
        vector<int> ans(n);
        ans[0] = rprefix[1];
        ans[n-1] = fprefix[n-2];
        for(int i = 1; i < n-1; i++){
            ans[i] = rprefix[i+1] * fprefix[i-1];
        }
        return ans;
    }
};
