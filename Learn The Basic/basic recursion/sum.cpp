#include <iostream>
using namespace std;
int name(int n,int ans, int count)
{
    if (n == count)
    {

        return ans;
    }
    cout << count<< "\n";
    name(n,ans+count, count + 1);
        
}

int main()
{

  cout<<  name(11, 0,0);
    return 0;
}