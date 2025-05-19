class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        vector<int>sol;
        map<int, int> mp;
        for (int i = 0; i < nums.size(); i++) {
            mp[nums[i]]++;
        }
        for (auto i : mp) {
            if (i.second > 1) {
                sol.push_back(i.first);
            }
        }
        return sol;
    }
};