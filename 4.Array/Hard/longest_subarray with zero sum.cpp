#include <iostream>
#include <vector>
#include<unordered_map>
using namespace std;

int largestSum(vector<int>&arr){

    int n=arr.size();
    unordered_map<int,int>map;
    int sum=0;
    int maxLength=0;

    for(int i=0;i<n;i++){

        sum+=arr[i];

        if(sum==0){
            maxLength=i+1;
        }else{
            if(map.find(sum)!=map.end()){

                maxLength=max(maxLength,i-map[sum]);
            }else{
                map[sum]=i;
            }
        }
    }

    return maxLength;

}

int main() {
    vector<int> arr = {9,-3,3,-1,6,-5};

    cout<<"Maximum length is = "<<largestSum(arr);

    return 0;
}