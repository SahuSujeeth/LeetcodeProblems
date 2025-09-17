#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maxFrequency(vector<int>& nums, int k) {
        sort(nums.begin(), nums.end()); // sort so we can target bigger numbers
        long long left = 0, total = 0, ans = 0;

        for (int right = 0; right < nums.size(); right++) {
            total += nums[right];

            // while condition breaks "budget k"
            while ((long long)nums[right] * (right - left + 1) - total > k) {
                total -= nums[left];
                left++;
            }

            ans = max(ans, right - left + 1);
        }
        return ans;
    }
};

int main() {
    Solution sol;
    vector<int> nums = {1, 2, 4};
    int k = 5;
    cout << sol.maxFrequency(nums, k) << endl; // Output: 3
    return 0;
}
