class Solution {
public:
    vector<int> searchRange(const std::vector<int>& nums, int target) {
        std::vector<int> result(2, -1);
        auto lower = lower_bound(nums.begin(), nums.end(), target);
        if (lower != nums.end() && *lower == target) {
            result[0] = lower - nums.begin();
        } else {
            return result;
        }
        auto upper = upper_bound(nums.begin(), nums.end(), target);
        result[1] = upper - nums.begin() - 1;

        return result;
    }
};

//-------------------------------------------------------------------------------//

class Solution {
public:
    vector<int> searchRange(const std::vector<int>& nums, int target) {
        int lo = 0, hi = nums.size() - 1, mid;
        vector<int> result(2, -1);
        while (lo <= hi) {
            mid = (lo + hi) / 2;
            if (nums[mid] == target) {
                result[0] = mid;
                hi = mid - 1;
            } else if (target < nums[mid]) {
                hi = mid - 1;
            } else if (target > nums[mid]) {
                lo = mid + 1;
            }
        }
        lo = 0, hi = nums.size() - 1;
        while (lo <= hi) {
            mid = (lo + hi) / 2;
            if (nums[mid] == target) {
                result[1] = mid;
                lo = mid + 1;
            } else if (target < nums[mid]) {
                hi = mid - 1;
            } else if (target > nums[mid]) {
                lo = mid + 1;
            }
        }
        return result;
    }
};
