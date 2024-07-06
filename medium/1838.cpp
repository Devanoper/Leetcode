class Solution {
public:
    int maxFrequency(vector<int>& nums, int k) {
        sort(nums.begin(), nums.end());
        long long cost = 0;
        int left = 0;
        int maxFreq = 1;
        for (int right = 1; right < nums.size(); ++right) {
            cost += (long long)(nums[right] - nums[right - 1]) * (right - left);
            while (cost > k) {
                cost -= nums[right] - nums[left];
                ++left;
            }
            maxFreq = max(maxFreq, right - left + 1);
        }
        return maxFreq;
    }
};
