#include <iostream>
using namespace std;
int sum(int n, int ans, int count)
{
    if (n == count)
    {

        return ans;
    }
    cout << count << "\n";
    sum(n, ans + count, count + 1);
}

int main()
{

    cout << sum(11, 0, 0);
    return 0;
}