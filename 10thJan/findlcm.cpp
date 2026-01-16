#include<iostream>
using namespace std;

long long findgcd(long long a, long long b){
    while(b!=0){
        a%=b;
        swap(a,b);
    }
    return a; 
}

int main(){
    long long a,b; cin >> a >> b;
    long long gcdValue = findgcd(a,b);
    cout<<((a/gcdValue)*b); 
    
    return 0;
}
