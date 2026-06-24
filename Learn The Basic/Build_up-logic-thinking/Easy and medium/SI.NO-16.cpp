#include<iostream>
using namespace std;

class Pattern{
public:
    void pattern(int n){ 
        char k='A';  
        for(int i = 1; i <= n; i++){
            for(int j = 1; j <= i; j++){
                cout <<" "<< k;
                
            }
             k++;
            cout << endl;
           
        }
    }
};

int main(){
    Pattern p;
    p.pattern(6);
}