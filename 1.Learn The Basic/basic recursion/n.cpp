#include <iostream>
using namespace std;
void name(int n, int count)
{
    if (n == count)
    {

        return;
    }
    cout << count<< "\n";
    name(n, count + 1);
        cout << count<< "\n";
}

int main()
{

    name(11, 0);
    return 0;
}