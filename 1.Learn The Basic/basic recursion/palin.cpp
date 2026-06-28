
#include <iostream>
#include <vector>
using namespace std;
string rev(string str, string &ans, int n)
{
    if (str.size() == n)
    {
        return ans;
    }
    rev(str, ans, n+1);
    ans.push_back(str[n]);
}

int main()
{
    string str="pepo";
    string ans="";
    rev(str, ans, 0);
   cout<<ans<<endl;
   if( str==ans){
    cout<<"palin";
   }else{
    cout<<"not palin";
   }
   return 0;
}