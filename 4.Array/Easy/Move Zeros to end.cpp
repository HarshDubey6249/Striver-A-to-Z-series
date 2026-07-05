#include <iostream>
#include <vector>
using namespace std;

int MoveZero(vector<int> &vec)
{
    int i = 0;
    for (int j = 0; j < vec.size(); j++)
    {

        if (vec[j] != 0)
        {
            swap(vec[i], vec[j]);
            i++;
        }
    }
}

int main()
{

    vector<int> vec = {2, 0, 0, 4, 1, 5, 0};

    for (int j = 0; j < vec.size(); j++)
    {
        cout << vec[j] << " ";
    }
cout<<endl;
    MoveZero(vec);

    for (int j = 0; j < vec.size(); j++)
    {
        cout << vec[j] << " ";
    }
}