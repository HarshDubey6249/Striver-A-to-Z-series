#include<iostream>
#include<vector>
using namespace std;
int insertionSort(vector<int>&vec,int n,int i){
    if(i==n){
        return 1;
    }
     
    
    int j=i;

    while(j>0 && vec[j-1]>vec[j]){
        swap(vec[j],vec[j-1]);
        j--;
      
    }

   

    insertionSort(vec,n,i+1);
}

int main(){
      vector<int>vec={3,1,2,4,1,5,2,6,4};


    int n=vec.size();

      cout << "Before Using Bubble Sort: " << endl;
    for (int i = 0; i < n; i++) {
        cout << vec[i] << " ";
    }
    cout << endl;

      insertionSort(vec,vec.size(),1);

    cout << "After Using Bubble Sort: " << endl;
    for (int i = 0; i < n; i++) {
        cout << vec[i] << " ";
    }
    cout << endl;
}