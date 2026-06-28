#include <iostream>
#include <vector>
#include<unordered_map>
using namespace std;

int hashfun(string str,unordered_map<char,int>&mpp)
{

    for (int i = 0; i < str.size(); i++)
    {

       

        mpp[str[i]]++;
    }
}

int main()
{

    string str = "aaaabbbbczzqq";

    unordered_map<char,int>mpp;
    hashfun(str, mpp);

    for (auto c : mpp)
    {
        cout  << c.first <<" : " << c.second<<endl;
    
    }
    return 0;
}