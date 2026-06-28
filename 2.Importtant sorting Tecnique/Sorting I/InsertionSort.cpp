#include<iostream>
#include<vector>
using namespace std;



int main(){

    vector<int>vec={13,46,24,52,20,9};
    int n=vec.size();

    for(int i=1;i<n;i++){
        int j=i;

        while(j>0 && vec[j-1]>vec[j]){
            swap(vec[j-1],vec[j]);
            j--;
        }
    }

    for(int i:vec){
      cout<<i<<" ";
    }
    return 0;

}