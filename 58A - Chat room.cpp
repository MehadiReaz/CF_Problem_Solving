#include <bits/stdc++.h>
using namespace std;
int main(){
    string str, target;
    int n = 0;
    target = "hello";
    cin>>str;
    for (int i = 0; i < str.length(); ++i) {
        if (str[i] == target[n]){
            n++;
        }
    }
    if (n == target.length()){
        cout<<"YES"<<endl;
    } else
        cout<<"NO"<<endl;
}
