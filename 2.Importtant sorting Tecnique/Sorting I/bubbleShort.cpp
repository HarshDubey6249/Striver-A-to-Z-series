#include <iostream>
#include<vector>
using namespace std;
int main(){

    vector<int>vec={13,46,24,52,20,9};

   
    for(int i=vec.size()-1;i>=1;i--){


        for(int j=0;j<i;j++){

            if(vec[j]>vec[j+1]){
               swap(vec[j],vec[j+1]);
            }
        }

        
    }


    for(int i:vec){
      cout<<i<<" ";
    }
    return 0;

}