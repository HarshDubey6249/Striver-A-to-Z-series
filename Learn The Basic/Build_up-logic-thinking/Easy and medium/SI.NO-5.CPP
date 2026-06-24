#include<iostream>
using namespace std;

class Pattern{
public:
    void pattern(int n){   
        for(int i = n; i >=1; i--){
            for(int j = i; j >=1; j--){
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