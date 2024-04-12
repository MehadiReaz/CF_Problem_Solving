#include <bits/stdc++.h>
using namespace std;
int main(){
    int a;
    cin>>a;
    for (int i = 0; i < a; ++i) {
        int n, p, x = 1;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; ++i) {
            int m;
            cin >> m;
            arr[i] = m;
        }
        sort(arr, arr + n);
        p = n / 2;
        if (n % 2 == 0) {
            p--;
        }
        for (int i = p + 1; i < n; ++i) {
            if (arr[i] == arr[p]) {
                x++;
            } else {
                break;
            }
        }
        cout << x << endl;
    }
}
