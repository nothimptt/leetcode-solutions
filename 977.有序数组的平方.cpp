/*
 * @lc app=leetcode.cn id=977 lang=cpp
 *
 * [977] 有序数组的平方
 */

// @lc code=start
class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        vector<int> res;
        for(int i = 0; i < nums.size(); ++i) {
            res.push_back(nums[i]*nums[i]);
        }
        sort(res.begin(),res.end());
        return res;
    }
};
// @lc code=end

