#include <iostream>

using namespace std;

int main() {
    typedef int *pInt;

    pInt PI;
    int I;

    PI = new int;
    *PI = 66;
    I = 22;

    cout << "PI: " << *PI << endl;
    cout << "I: " << I << endl;
}

/* 
    a) delete I; err
    b) pInt=new int; err
    c) PI=I / 11; err
    d) I=(*PI) % 3; I = 0
    e) cout<<PI; address
    f) cin>>PI; err
*/