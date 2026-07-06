#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> vec = {21, 22, 3, 7, 21, 11};
    int maxl = 0;
    int j = 0;
    int sum = 32;
    int k =0;

    for (int i = 0; i < vec.size(); i++)
    {
       k +=vec[i] ;


       while(k>sum){
        k-=vec[j];
        j++;
       }
        if (k == sum)
        {

            maxl = max(maxl, i-j+1);
            
        }
    }

    cout << "Max element is=" << maxl;
    return 0;
}