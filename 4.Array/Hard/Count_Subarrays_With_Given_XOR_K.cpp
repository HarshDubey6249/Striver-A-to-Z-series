#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

int subarrayXor(vector<int> &nums, int k)
{

    unordered_map<int, int> mp;
    mp[0] = 1;

    int xorSum = 0;
    int cnt = 0;

    int n = nums.size();

    for (int i = 0; i < n; i++)
    {
        xorSum ^= nums[i];

        if (mp.find(xorSum ^ k) != mp.end())
        {
            cnt += mp[xorSum ^ k];
        }

        mp[xorSum]++;
    }

    return cnt;
}

int main()
{

    vector<int> nums = {4, 2, 2, 6, 4};
    int k = 6;

    cout << "Number of subarrays = "
         << subarrayXor(nums, k);

    return 0;
}