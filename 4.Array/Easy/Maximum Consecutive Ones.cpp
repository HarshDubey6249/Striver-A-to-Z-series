#include <iostream>
#include <vector>

using namespace std;

void findMaxConsecutiveOnes(vector<int> &nums)
{
    int len = 0;
    int ans = 0;
    for (int i = 0; i < nums.size(); i++)
    {
        if (nums[i] == 1)
        {
            len++;
            cout<<i <<"="<<len<<endl;
            ans = max(ans, len);
        }
        else
        {
            
            len = 0;
        }
    }
   cout<<ans;
}

int main()
{

    vector<int> vec = {1,1, 0, 0, 1, 1, 1, 0};
   

   findMaxConsecutiveOnes(vec);

   
}

