#include <bits/stdc++.h>
using namespace std;

int main () {
    int arr[3], sum, n, f_sum, mod;
    cin>>n;
    for (int i = 0; i < n; ++i){
        for (int j = 0; j < 3; ++j) {
            cin >> arr[j];
        }
            int dev =  arr[1] / 3;
            mod  = arr[1] % 3;
            if (mod == 0) {
                if (arr[2]%3 == 0){
                    f_sum = arr[0] + (arr[1] / 3) + (arr[2] / 3);
                } else {
                    f_sum = arr[0] + (arr[1] / 3) + (arr[2] / 3) + 1;
                }
                cout << f_sum << endl;
            }
            else if (mod + arr[2] >=3){
                if((mod + arr[2])%3 == 0){
                    f_sum = arr[0] + dev + ((mod + arr[2])/3);
                    cout << f_sum << endl;
                } else {
                    f_sum = arr[0] + dev + ((mod + arr[2])/3) +1;
                    cout << f_sum << endl;
                }
            } else {
                cout<< "-1" <<endl;
            }
    }
    return 0;
}
