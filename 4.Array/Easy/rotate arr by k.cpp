#include <iostream>
#include <vector>

using namespace std;


//Right shiffting ok 
// int main()
// {
//     vector<int> nums = {1, 2, 3, 4, 5, 6, 7};
//     int n = nums.size();
//     int d = 3;
//     vector<int> temp(d);
//     for (int i = 0; i < d; i++) {
//             temp[i] = nums[n - d + i];
//         }

//    for (int i = n - d - 1; i >= 0; i--) {
//             nums[i + d] = nums[i];
//         }

//      for (int i = 0; i < d; i++) {
//             nums[i] = temp[i];
//         }

//     for (int i = 0; i < n; i++)
//     {
//         cout << nums[i] << endl;
//     }
// }


//Left shiffting 

int main()
{
    vector<int> nums = {1, 2, 3, 4, 5, 6, 7};
    int n = nums.size();
    int d = 3;
    vector<int> temp(d);
    for (int i = 0; i < d; i++) {
            temp[i] = nums[i];
        }

   for (int i =d; i <n; i++) {
            nums[i -d] = nums[i];
        }

     for (int i = 0; i < d; i++) {
            nums[n-d+i] = temp[i];
        }

    for (int i = 0; i < n; i++)
    {
        cout << nums[i] << endl;
    }
}