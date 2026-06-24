#include<iostream>
using namespace std;

class Pattern{
public:
    void pattern(int n){   // ✅ changed int → void
        for(int i = 0; i < n; i++){
            for(int j = 0; j < n; j++){
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