#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int x, n;
    cin>>n;
    int arr[n];
 
    for (int i = 0; i < n; ++i) {
 
        cin>>x;
 
        arr[i] = x;
    }
 
    int p = distance(arr, max_element(arr, arr + n)) + 1;
 
    sort(arr, arr + n);
 
    cout<< p << endl;
 
    cout<< arr[n-2] << endl;
 
    return 0;
}
