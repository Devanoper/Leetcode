class Solution {
public:
    vector<vector<int>> permute(vector<int>& nums) {
        permutations.clear();
        temp.clear();
        vector<bool> chosen(nums.size(), false);
        search(nums, chosen);
        return permutations;
    }

private:
    vector<vector<int>> permutations;
    vector<int> temp;
    void search(vector<int>& nums, vector<bool>& chosen) {
        if (temp.size() == nums.size()) {
            permutations.push_back(temp);
            return;
        }
        for (int i = 0; i < nums.size(); i++) {
            if (chosen[i]) {
                continue;
            }
            chosen[i] = true;
            temp.emplace_back(nums[i]);
            search(nums, chosen);
            chosen[i] = false;
            temp.pop_back();
        }
    }
};