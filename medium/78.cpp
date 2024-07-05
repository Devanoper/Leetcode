class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> res;
        for (size_t i = 0; i < 1 << size(nums); i++) {
            vector<int> temp;
            for (size_t j = 0; j < size(nums); j++) {
                if (i & (1 << j)) {
                    temp.push_back(nums[j]);
                } else {
                    continue;
                }
            }
            res.push_back(temp);
        }
        return res;
    }
};
