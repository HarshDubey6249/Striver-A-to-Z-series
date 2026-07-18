#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void matrix9(vector<vector<int>> &vec)
{
    int n = vec.size();
    int m = vec[0].size();

    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < m; j++)
        {

            swap(vec[i][j], vec[j][i]);
        }
    }

    for (int i = 0; i < n; i++)
    {
        reverse(vec[i].begin(), vec[i].end());
    }
}

int main()
{

    vector<vector<int>> matrix = {
        {1, 2, 3},
        {5, 6, 7},
        {9, 10, 11}};
    for (auto &row : matrix)
    {
        for (auto &element : row)
        {
            cout << element << " ";
        }
        cout << endl;
    }

    cout << endl
         << "-------------------------------------------------" << endl;

        matrix9(matrix);

    for (auto &row : matrix)
    {
        for (auto &element : row)
        {
            cout << element << " ";
        }
        cout << endl;
    }
}