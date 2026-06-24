#include<iostream>
using namespace std;

class Pattern{
public:
    void pattern(int n){ 
        char k='A';  
        for(int i = 0; i < n; i++){
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