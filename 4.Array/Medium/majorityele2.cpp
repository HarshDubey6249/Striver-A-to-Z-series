#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int n = nums.size();
        vector<int> ans;
        unordered_map<int, int> freq;

        for (int i = 0; i < n; i++) {
            freq[nums[i]]++;

            // Add only when frequency becomes greater than n/3
            if (freq[nums[i]] == (n / 3) + 1) {
                ans.push_back(nums[i]);
            }

            // At most two majority elements can exist
            if (ans.size() == 2) {
                return ans;
            }
        }

        return ans;
    }
};

int main() {
    Solution obj;

    vector<int> nums = {3, 2, 3};

    vector<int> result = obj.majorityElement(nums);

    cout << "Majority Elements: ";
    for (int x : result) {
        cout << x << " ";
    }
    cout << endl;

    return 0;
}