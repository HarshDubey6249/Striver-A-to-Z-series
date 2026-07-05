#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> vec = {21, 22, 3, 7, 21, 76};
    int max = vec[0];

    for (int i = 0; i < vec.size(); i++)
    {
        if (max < vec[i])
            max = vec[i];
    }

    cout<<"Max element is="<<max;
}