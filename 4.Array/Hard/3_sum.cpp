#include <iostream>
#include <vector>
#include<set>
#include <algorithm>

using namespace std;

class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& arr) {

        set<vector<int>>ans;
        int n=arr.size();

        for(int i=0;i<n;i++){

            set<int>s;

            for(int j=i+1;j<n;j++){

                int third=-(arr[i]+arr[j]);
                if(s.find(third)!=s.end()){
                    vector<int>temp={arr[i],arr[j],third};
                    sort(temp.begin(),temp.end());
                    ans.insert(temp);

                }
                s.insert(arr[j]);
            }
        }
       vector<vector<int>>fAns={ans.begin(),ans.end()};
       return fAns;
    }
};
int main() {
    Solution obj;

    vector<int> arr = {-1, 0, 1, 2, -1, -4};

    vector<vector<int>> ans = obj.threeSum(arr);

    cout << "Triplets are:\n";
    for (auto &triplet : ans) {
        for (int x : triplet) {
            cout << x << " ";
        }
        cout << endl;
    }

    return 0;
}


// Complexity
// Time: O(n² log n)
// Two nested loops: O(n²)
// Set lookup/insert: O(log n)
// Space: O(n) for the hash set (per iteration) + output