#include <iostream>
using namespace std;
void name(int n, int count)
{
    if (n == count)
    {

        return;
    }
    cout << "harsh \n";
    name(n, count + 1);
}

int main()
{

    name(5, 0);
    return 0;
}