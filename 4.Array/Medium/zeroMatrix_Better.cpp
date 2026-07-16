#include <iostream>
#include <vector>
using namespace std;

void zeroMatric(vector<vector<int>> &vec, int n)
{

    vector<int> row(n, 0);
    vector<int> col(n, 0);

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {

            if (vec[i][j] == 0)
            {
                row[i] = -1;
                col[j] = -1;
            }
        }
    }

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {

            if (row[i] == -1 || col[j] == -1)
            {
                vec[i][j] = 0;
            }
        }
    }
}

int main()
{
    vector<vector<int>> vec = {{1, 2, 3}, {4, 0, 6}, {7, 8, 9}};

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << vec[i][j] << " ";
        }
        cout << endl;
    }

    cout << endl
         << "++++++++++++++++++++++++++++++++++++++++" << endl;

    zeroMatric(vec, 3);

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << vec[i][j] << " ";
        }
        cout << endl;
    }
}
