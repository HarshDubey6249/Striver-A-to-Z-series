#include<iostream>
#include<vector>
using namespace std;


vector<int> merge(vector<int>&arr,int low,int mid,int high){

    int left=low;
    int right=mid+1;

    vector<int>temp={};

    while(left<=mid&& right<=high){

        if(arr[left]<arr[right]){
            temp.push_back(arr[left]);
            left++;

        }else{
            temp.push_back(arr[right]);
            right++;
        }
    }

    while (left<=mid)
    {
         temp.push_back(arr[left]);
            left++;
    }

    while (right<=high)
    {
         temp.push_back(arr[right]);
            right++;
    }

    for(int i=low;i<=high;i++){
        arr[i]=temp[i-low];
    }
    

}

int mergeSort(vector<int>&vec,int low,int high){
    if(low>=high){
        return 1;
    }
    int mid=(low+high)/2;
    mergeSort(vec,low,mid);
    mergeSort(vec,mid+1,high);
    merge(vec,low,mid,high);
}
int main(){

    vector<int>vec={3,1,2,4,1,5,2,6,4};
    int n=vec.size()-1;

    mergeSort(vec,0,n);

    for(int i=0;i<vec.size();i++){
        cout<<vec[i]<<" ";
    }
}