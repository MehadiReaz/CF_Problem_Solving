#include <bits/stdc++.h>
using namespace std;
int main(){
    int a,b,c,d,e, n;
    cin>>e>>d>>c>>b>>a >>n;
    string str[n];
    for (int i = 0; i < n; ++i) {
        string s;
        cin>>s;
        str[i] = s;
    }
    for (int i = 0; i < n; ++i) {
        if (str[i] == "XXL"){
            if (a>=1){
                a--;
                cout<<"XXL"<<endl;
            } else if(b>=1){
                cout<<"XL"<<endl;
                b--;
            } else if(c>=1){
                cout<<"L"<<endl;
                c--;
            } else if(d>=1){
                cout<<"M"<<endl;
                d--;
            } else if(e>=1){
                cout<<"S"<<endl;
                e--;
            }
        } else if (str[i] == "XL"){
            if (b>=1){
                b--;
                cout<<"XL"<<endl;
            } else if(a>=1){
                cout<<"XXL"<<endl;
                a--;
            } else if(c>=1){
                cout<<"L"<<endl;
                c--;
            } else if(d>=1){
                cout<<"M"<<endl;
                d--;
            }  else if(e>=1){
                cout<<"S"<<endl;
                e--;
            }
        } else if (str[i] == "L"){
            if (c>=1){
                c--;
                cout<<"L"<<endl;
            } else if(b>=1){
                cout<<"XL"<<endl;
                b--;
            } else if(d>=1){
                cout<<"M"<<endl;
                d--;
            } else if(a>=1){
                cout<<"XXL"<<endl;
                a--;
            } else if(e>=1){
                cout<<"S"<<endl;
                e--;
            }
        } else if (str[i] == "M"){
            if (d>=1){
                d--;
                cout<<"M"<<endl;
            } else if(c>=1){
                cout<<"L"<<endl;
                c--;
            } else if(e>=1){
                cout<<"S"<<endl;
                e--;
            } else if(b>=1){
                cout<<"XL"<<endl;
                b--;
            } else if(a>=1){
                cout<<"XXL"<<endl;
                a--;
            }
        } else if (str[i] == "S"){
            if (e>=1){

                cout<<"S"<<endl;
                e--;
            } else if(d>=1){
                cout<<"M"<<endl;
                d--;
            } else if(c>=1){
                cout<<"L"<<endl;
                c--;
            } else if(b>=1){
                cout<<"XL"<<endl;
                b--;
            } else if(a>=1){
                cout<<"XXL"<<endl;
                a--;
            }
        }
    }

}
