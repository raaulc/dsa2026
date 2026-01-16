#include<iostream>
using namespace std;
const long long mod = 1e9 + 7;

int main(){
    long long n;cin>>n;
    long long result = 1; 
    for(int i=0;i<n;i++){
        result = (result*2)%mod;
    }
    cout<<result<<endl;
    return 0;
}