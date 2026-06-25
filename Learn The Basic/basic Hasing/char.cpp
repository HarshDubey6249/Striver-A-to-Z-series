#include <iostream>
#include <vector>
using namespace std;

int hashfun(string str, vector<int> &vec)
{

    for (int i = 0; i < str.size(); i++)
    {

        int ch = str[i] - 'a';

        vec[ch]++;
    }
}

int main()
{

    string str = "aaaabbbbczzqq";

    vector<int> vec(26, 0);
    hashfun(str, vec);

    char ch = 'a';
    for (auto c : vec)
    {
        cout << ch << " = " << c << endl;
        ch++;
    }
    return 0;
}