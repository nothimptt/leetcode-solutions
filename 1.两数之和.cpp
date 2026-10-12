/*
 * @lc app=leetcode.cn id=1 lang=cpp
 *
 * [1] 两数之和
 */

// @lc code=start
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> result;
        unordered_map<int, int> num_index; // 哈希
        for (int i = 0; i < nums.size(); ++i) {
            if (num_index.find(target - nums[i]) != num_index.end()) {
                result.push_back(num_index[target-nums[i]]);
                result.push_back(i);
            }
            num_index[nums[i]] = i;
        }
        return result;
    }
};
// @lc code=end

