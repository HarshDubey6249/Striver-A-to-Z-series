#include <iostream>
#include<vector>
using namespace std;
int main(){

    vector<int>vec={13,46,24,52,20,9};

   
    for(int i=0;i<vec.size();i++){

        int min_inx=i;

        for(int j=i+1;j<vec.size();j++){

            if(vec[j]<vec[min_inx]){
                min_inx=j;
            }
        }

        swap(vec[i],vec[min_inx]);
    }


    for(int i:vec){
      cout<<i<<" ";
    }
    return 0;

}