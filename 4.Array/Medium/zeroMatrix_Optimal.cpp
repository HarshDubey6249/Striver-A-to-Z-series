#include <iostream>
#include <vector>
using namespace std;

void zeroMatric(vector<vector<int>> &vec)
{
    int rows = vec.size();
    int cols = vec[0].size();

    int col1 = 1;

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {

            if (vec[i][j] == 0)
            {
                // mat of ith col
                if (j != 0)
                {
                    vec[0][j] = 0;
                }
                else
                {
                    col1 = 0;
                }
                // mat of ith row
                vec[i][0] = 0;
            }
        }
    }

    for (int i = 1; i < rows; i++)
    {
        for (int j = 1; j < cols; j++)
        {
            if (vec[i][0] == 0 || vec[0][j] == 0)
            {
                vec[i][j] = 0;
            }
        }
    }

    for(int j=0;j<cols;j++){
        if(vec[0][0]==0){
            vec[0][j]=0;
        }
    }
    for(int i=0;i<rows;i++){
        if(col1==0){
            vec[i][0]=0;
        }
    }
}

int main()
{
    vector<vector<int>> vec = {
        {1, 2, 3, 4, 5},
        {6, 7, 0, 9, 10},
        {11, 12, 13, 0, 15},
        {16, 17, 18, 19, 20},
        {21, 0, 23, 24, 25}};

    int rows = vec.size();
    int cols = vec[0].size();

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            cout << vec[i][j] << " ";
        }
        cout << endl;
    }

    cout << endl
         << "++++++++++++++++++++++++++++++++++++++++" << endl;

    zeroMatric(vec);

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            cout << vec[i][j] << " ";
        }
        cout << endl;
    }
}
