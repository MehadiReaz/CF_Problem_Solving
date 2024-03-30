#include <bits/stdc++.h>
using namespace std;

int main () {
    int k;
    string month_name;
     string arr[12] = {"January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"};

    cin >> month_name >> k;

    int month_index;

    for (int i = 0; i < 12; ++i) {
        if (month_name == arr[i]) {
        month_index = i;

    }}
    int target_index = ((month_index + k) % 12);
    if (target_index < 0)
        target_index += 12;
    cout << arr[target_index]<< endl;
    return 0;
}
