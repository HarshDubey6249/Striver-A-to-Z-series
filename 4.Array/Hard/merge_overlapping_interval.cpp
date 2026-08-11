#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

void overlapping_interval(vector<vector<int>> arr){
  // 1. Sort intervals by starting value
   // sort(arr.begin(), arr.end());
    int  n=arr.size();

    vector<vector<int>>ans;

    // for(int i=0;i<n;i++){

    //     int start=arr[i][0];
    //     int end=arr[i][1];
    //   // cout<<i <<"-"<<start<<" "<<end<<endl;

    //   if(!ans.empty() && end <= ans.back()[1]){
    //     continue;
    //   }

    //   for(int j=i+1;j<n;j++){
    //     if(end >= arr[j][0]){
    //         end=max(end,arr[j][1]);
    //     }else{
    //         break;
    //     }
    //   }
    //   ans.push_back({start,end});

    // }

//----------------------------------------------

for(int i=0;i<n;i++){

    if(ans.empty()|| arr[i][0]> ans.back()[1]){
        ans.push_back(arr[i]);
    }else{
        ans.back()[1]=max(ans.back()[1],arr[i][1]);
    }
}


 for (auto i : ans) {
    cout << i[0] << " " << i[1] << endl;
}
}


int main(){

  vector<vector<int>> arr = {
    {1, 3},
    {2, 6},
    {8, 10},
    {15, 18}
};

overlapping_interval(arr);
return 0;


}