#include<iostream>
using namespace std;
int fib(int n){
    if(n<=1){
        return n;
    }

    int flast=fib(n-1);
    int slast=fib(n-2);

    return flast+slast;
}

int main(){
    int n=5;

    cout<<fib(n);
    return 0;
}