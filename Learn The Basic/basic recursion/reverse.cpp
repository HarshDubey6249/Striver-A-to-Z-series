
#include <iostream>
#include <vector>
using namespace std;
vector<int> rev(vector<int> &vec, vector<int> &ans, int n)
{
    if (vec.size() == n)
    {

        return ans;
    }

    rev(vec, ans, n+1);
    ans.push_back(vec[n]);
}

int main()
{
    vector<int> vec = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    vector<int> ans;
    rev(vec, ans, 0);

    for (auto n : ans)
    {
        cout << n << " ";
    }
    return 0;
}