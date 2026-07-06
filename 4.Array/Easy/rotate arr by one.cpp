#include <iostream>
#include <vector>
using namespace std;

void rotate_by_one(vector<int> &vec)
{
    int i = 0;
    for (int j = 1; j < vec.size(); j++)
    {
        swap(vec[i], vec[j]);
        i++;
    }
}

int main()
{

    vector<int> vec = {1, 0, 0, 4, 1, 5, 0};
    for (int x : vec)
        cout << x << " ";

    cout << endl;

    rotate_by_one(vec);

    for (int x : vec)
        cout << x << " ";
}


