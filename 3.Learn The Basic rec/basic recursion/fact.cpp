#include <iostream>
using namespace std;
// Recursive function to calculate factorial of a number
int fact(int n)
{
        // Base case: factorial of 0 is 1
    if (n ==0)
    {

        return 1;
    }
   // Recursive case: n * factorial of (n-1)
  return  n*fact(n-1);
    
    
        
}

int main()
{

  cout<<  fact(4);
    return 0;
}