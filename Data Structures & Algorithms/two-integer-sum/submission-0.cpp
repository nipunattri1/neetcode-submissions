class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> remainign_map;
        for (int i = 0; i < nums.size(); ++i){
            int remaining = target - nums[i];
            if (remainign_map.find(remaining) != remainign_map.end()){
                return {remainign_map[remaining], i};
            }
            remainign_map[nums[i]] = i;
        }
        return {};
    }
};