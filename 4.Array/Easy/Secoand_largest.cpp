#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> vec = {21, 22, 53, 7, 21, 76};
    int max = vec[0];
    int max1 = vec[0];

    for (int i = 0; i < vec.size(); i++)
    {
        if (max < vec[i])
        {
            max1 = max;
            max = vec[i];
        }
        else if (vec[i] > max1 && vec[i] != max)
        {
            max1 = vec[i];
        }
    }

    cout << "Max element is=" << max1;
}