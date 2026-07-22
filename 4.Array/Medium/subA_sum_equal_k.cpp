#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {

        unordered_map<int, int> mp;
        mp[0] = 1;   

        int sum = 0;
        int count = 0;

        for (int i = 0; i < nums.size(); i++) {

            sum += nums[i];

            // Check if (sum - k) exists
            if (mp.find(sum - k) != mp.end()) {
                count += mp[sum - k];
            }

            // Store current prefix sum
            mp[sum]++;
        }

        return count;
    }
};

int main() {

    vector<int> nums = {1, 1, 1};
    int k = 2;

    Solution obj;

    cout << "Number of subarrays = " << obj.subarraySum(nums, k) << endl;

    return 0;
}