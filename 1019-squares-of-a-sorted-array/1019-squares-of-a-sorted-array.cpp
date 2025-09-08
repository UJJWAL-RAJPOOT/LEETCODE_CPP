class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        vector<int> sol(nums.size());
        for(int i=0;i<nums.size();i++){
            sol[i]=nums[i]*nums[i];
        }
        sort(sol.begin(),sol.end());
        return sol;
        
    }
};