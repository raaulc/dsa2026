#include<iostream>
using namespace std;

int main(){
    int a; cin >> a; 
    bool isPower = false;
    while(a>0 && a%2 == 0){
        a /= 2;
        cout << a << endl;
    }

    cout << "value of a is " << a << endl;
    cout << "isPower" <<isPower << endl;

    return 0;
}
