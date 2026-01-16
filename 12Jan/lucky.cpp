#include<iostream>
using namespace std; 

int main(){
    int n;cin>>n;

    long long office = 0;
    long long power = 2;

    for (int i = 1; i <= n; i++) {
        office += power;
        power *= 2; 
    }

    cout << office << endl;

    return 0;
}