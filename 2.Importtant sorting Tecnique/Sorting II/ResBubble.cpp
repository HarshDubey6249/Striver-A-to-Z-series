#include<iostream>
#include<vector>
using namespace std;
int bubbleSort(vector<int>&vec,int n){
    if(n==1){
        return 1;
    }
     
    int isSwap=0;
    for(int j=0;j<=n;j++){
        if(vec[j]>vec[j+1]){
            swap(vec[j],vec[j+1]);
            isSwap=1;
        }
    }

    if(isSwap==0){
      return 1;
    }

    bubbleSort(vec,n-1);
}

int main(){
      vector<int>vec={3,1,2,4,1,5,2,6,4};


    int n=vec.size();

      cout << "Before Using Bubble Sort: " << endl;
    for (int i = 0; i < n; i++) {
        cout << vec[i] << " ";
    }
    cout << endl;

      bubbleSort(vec,vec.size()-1);

    cout << "After Using Bubble Sort: " << endl;
    for (int i = 0; i < n; i++) {
        cout << vec[i] << " ";
    }
    cout << endl;
}