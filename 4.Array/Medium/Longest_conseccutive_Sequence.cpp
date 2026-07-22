#include <iostream>
#include <vector>
#include <algorithm>
#include<unordered_set>
using namespace std;

// Brute force approach
// bool linearSearch(vector<int>vec,int n){

//     for(int i=0;i<vec.size();i++){
//         if(vec[i]==n){
//             return true;
//         }

//     }
//  return false;
// }

// int longest_consecutive(vector<int>& arr){
//     int n=arr.size();
//     int largest=1;

//     for(int i=0;i<n;i++){

//         int count=0;
//         int x=arr[i];
//         while (linearSearch(arr,x)==true)
//         {
//             x=x+1;
//             count++;
//         }

//         largest=max(largest,count);
//     }

// return largest;
// }

// int main(){

//     vector<int>vec={101,102,2,1,3,4,104,45,46,47,48,49,5};
//   int ans=  longest_consecutive(vec);

//   cout<<ans;

// }

// better

// int longest_consecutive(vector<int> &arr)
// {

//     int n = arr.size();
//     sort(arr.begin(), arr.end());

//     int largest_con = 1;
//     int curr_count = 0;

//     int pre = INT32_MIN;

//     for (int i = 0; i < n; i++)
//     {

//         if(arr[i]==pre){
//             continue;
//         }

//         if (arr[i] - 1 == pre)
//         {
//             curr_count++;
//             pre = arr[i];
//         }
//         else if (arr[i] - 1 != pre)
//         {
//              largest_con = max(largest_con, curr_count);

//             curr_count = 1;
//             pre = arr[i];
//         }
//         largest_con = max(largest_con, curr_count);
//     }

//     return largest_con;
// }

int longest_consecutive(vector<int> &arr){
    int n=arr.size(); 
    int longest=1;
    unordered_set<int>st;

    for(int i=0;i<n;i++){
        st.insert(arr[i]);
    }

    for(auto it:st){

        if(st.find(it-1)==st.end()){

            int x=it;
            int count=0;
            while(st.find(x)!=st.end()){
                x=x+1;
                count++;
            }
            longest=max(longest,count);
            
        }
    }
 return longest;
    
}

int main()
{

    vector<int> vec = {101,103,104, 102, 2, 1, 1, 1, 1, 3, 3, 3, 3, };
    int ans = longest_consecutive(vec);

    cout << ans;
}
