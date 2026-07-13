#include<iostream>
#include<vector>
#include <algorithm>
using namespace std;

void next_permutation(vector<int> &arr){

      int idx=-1;
      int n=arr.size();

      for(int i=n-2;i>=0;i--){
        if(arr[i]<arr[i+1]){
            idx=i;
            break;
        }
    }
        if(idx==-1){
            return reverse(arr.begin(),arr.end());
        }

        for(int i=n-1;i>=idx;i--){
            if(arr[i]>arr[idx]){
                swap(arr[i],arr[idx]);
            }
        }
      
        reverse(arr.begin()+idx+1,arr.end());

}

int main(){

    vector<int>vec={1,2,3,4,5};
    for(int i=0;i<vec.size();i++){
        cout<<vec[i]<<" ";
    }
cout<<endl<<"--------------------"<<endl;
    next_permutation(vec);
     for(int i=0;i<vec.size();i++){
        cout<<vec[i]<<" ";
    }




}