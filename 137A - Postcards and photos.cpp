#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int flag = 1, n = 1;
    string input;
    cin >> input;
 
    for (int i = 1; i < input.length(); ++i) {
        if (i != 0 && input[i] != input[i - 1] || n==5) {
            flag++;
            n = 1;
        }
        else {
            n++;
        }
    }
    cout << flag;
    return 0;
}
