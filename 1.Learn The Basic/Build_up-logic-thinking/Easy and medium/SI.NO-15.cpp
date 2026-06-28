#include<iostream>
using namespace std;

class Pattern{
public:
    void pattern(int n){ 
        
        for(int i =n; i >=1; i--){
               char k='A'; 
            for(int j = 0; j < i; j++){
                cout <<" "<< k;
                 k++;
            }
           
            cout << endl;
        }
    }
};

int main(){
    Pattern p;
    p.pattern(6);
}