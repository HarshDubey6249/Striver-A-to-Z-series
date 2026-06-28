#include<iostream>
using namespace std;

class Pattern{
public:
    void pattern(int n){   
        for(int i = 0; i < n; i++){
            for(int j = 0; j < i; j++){
                cout << "*";
            }
            cout << endl;
        }
        for(int i = n; i >0; i--){
            for(int j = 0; j < i; j++){
                cout << "*";
            }
            cout << endl;
        }
    }
};

int main(){
    Pattern p;
    p.pattern(6);
}