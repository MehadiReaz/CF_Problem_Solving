#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, flagA, flagB;
    cin>>n;
    string input;
    for (int i = 0; i < n; ++i) {
        cin>>input;
        for (int j = 0; j < input.length(); ++j) {
            sort(input.begin(), input.end());
            if (input[j] == 'A'){
                flagA++;
            }
            else if (input[j] == 'B'){
                flagB++;
            }
        }
        if (flagA>flagB){
            cout<<"A"<<endl;
        } else {
            cout<<"B"<<endl;
        }
        flagA = 0;
        flagB = 0;
    }

}
 
