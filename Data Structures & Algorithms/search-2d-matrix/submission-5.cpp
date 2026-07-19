class Solution {
   public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int m = matrix.size();
        int n = matrix[0].size();
        int l = 0;
        int r = m * n - 1;
        while (l <= r) {
            int mid = l + (r - l) / 2;
            if (val(mid, m, n, matrix) == target) return true;
            if (val(mid, m, n, matrix) < target) {
                l = mid  + 1;
            } else {
                r = mid -1;
            }
        }
        return false;
    }

    int val(int idx,int m,int n, vector<vector<int>>& matrix) { return matrix[idx / n][idx % n]; }
};
