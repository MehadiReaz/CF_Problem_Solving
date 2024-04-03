#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int n, k, l, c, d, p, nl, np;
    cin>>n>>k>>l>>c>>d>>p>>nl>>np;
    int kl = (k*l)/nl;
    int limes = c * d;
    int salt = p/np;
 
    int minimum = min(kl, limes);
    int m = min(minimum, salt);
    m = m/n;
    cout<<m<<endl;
    return 0;
}
