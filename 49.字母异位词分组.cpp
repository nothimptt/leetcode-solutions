/*
 * @lc app=leetcode.cn id=49 lang=cpp
 *
 * [49] 字母异位词分组
 */

// @lc code=start
class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> result;
        unordered_map<string, vector<string>> map;
        for (string str : strs) {
            string key = str;
            sort(key.begin(), key.end());
            map[key].push_back(str);
        }
        // 只读取元素：优先使用 const auto&。由于有 const 限定，不能通过 pair 修改原来的元素。
        // 需要修改原容器元素(引用)：使用 auto&。
        // 需要独立副本：使用 auto。
        for (const auto pair : map) {
            result.push_back(pair.second);
        }
        return result;
    }
};

/* 例如：
    vector<int> nums = {1, 2, 3};

    for (auto n : nums) {
        n = 100;
    }
    // nums 仍然是 {1, 2, 3}

    for (auto& n : nums) {
        n = 100;
    }
    // nums 变成 {100, 100, 100}
*/
// @lc code=end

