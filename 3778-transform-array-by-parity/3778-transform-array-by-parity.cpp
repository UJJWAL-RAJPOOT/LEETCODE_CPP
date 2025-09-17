class Solution {
public:
    vector<int> transformArray(vector<int>& nums) {
        int n = nums.size();
        vector<int> sol(n);
        for (int i = 0; i < n; i++) {
            if (nums[i] % 2 == 0) {
                sol[i] = 0;
            } else {
                sol[i] = 1;
            }
        }
        sort(sol.begin(), sol.end());
        return sol;
    }
};