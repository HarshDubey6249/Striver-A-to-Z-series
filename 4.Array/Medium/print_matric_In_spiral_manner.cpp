#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void matrix9(vector<vector<int>> &vec)
{
    int n = vec.size();
    int m = vec[0].size();
    int top=0;
    int left=0;
    int right=m-1;
    int buttom=n-1;
    vector<int>ans;
    while(top<=buttom && left<=right){

        for(int i=left;i<=right;i++){
            ans.push_back(vec[top][i]);
        }
        top++;

        for(int i=top;i<=buttom;i++){
            ans.push_back(vec[i][right]);
        }
        right--;

        if(left<=right){

            for(int i=right;i>=left;i--){
                ans.push_back( vec[buttom][i]);
            }
             buttom--;
        }

       

        if(top<=buttom){
            for(int i=buttom;i>=top;i--){
                ans.push_back(vec[i][left]);
                
            }
            left++;
        }
    }


    for(auto i:ans){
        cout<<i<<" ";
    }

}


int main()
{

    vector<vector<int>> matrix = {
        {1, 2, 3},
        {5, 6, 7},
        {9, 10, 11}};
   
        matrix9(matrix);

   
}