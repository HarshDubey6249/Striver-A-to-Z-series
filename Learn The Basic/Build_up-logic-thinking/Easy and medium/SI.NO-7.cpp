#include<iostream>   // Library for input-output (cout, cin)
using namespace std;

// Class definition
class Pattern{
public:
    // Function to print pattern
    void pattern(int n){   
        
        // Outer loop → controls number of rows
        for(int i = 1; i <= n; i++){

            // Loop for printing spaces before stars
            // Spaces decrease as row increases
            for(int k = 1; k <= n - i; k++){
                cout << " ";
            }

            // Loop for printing stars
            // Formula (2*i - 1) → gives odd numbers (1,3,5,...)
            for(int j = 1; j <= (2*i - 1); j++){
                cout << "*";
            }

            // Move to next line after each row
            cout << endl;
        }
    }
};

// Main function → program execution starts here
int main(){
    Pattern p;      // Object creation of class Pattern
    p.pattern(6);   // Function call with n = 6
}