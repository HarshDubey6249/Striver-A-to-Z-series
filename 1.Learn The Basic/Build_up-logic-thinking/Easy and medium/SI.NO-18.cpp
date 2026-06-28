#include <iostream>
using namespace std;

class Solution {
public:
    void pattern18(int n) {
        for (int i = 1; i <= n; i++) {
            char cha = 'A' + n - i;
            char ch = cha;

            for (int j = 1; j <= i; j++) {
                cout << ch << " ";
                ch++;
            }

            cout << endl;
        }
    }
};

int main() {
    int n;

    cout << "Enter n: ";
    cin >> n;

    Solution obj;
    obj.pattern18(n);

    return 0;
}