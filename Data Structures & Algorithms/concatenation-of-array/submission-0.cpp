class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        vector<int> arr(2*nums.size());
        for(int i = 0; i < 2*nums.size(); i++){
            arr[i] = nums[i%nums.size()];
        }
        return arr;
    }
};