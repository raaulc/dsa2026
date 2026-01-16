#include<iostream>
using namespace std; 

void calculatePower(long long& n,long long& power, long long& modVal){
    long long result = 1;
    for(int i=0;i<power;i++){
        result *= n;
        result = result % modVal;
    }
    long long answer = result % modVal;
    cout<<answer<<endl;
}

// 2^4 , 16%7
int main(){
    long long n = 1e11;
    long long power = 1e3;
    long long modVal;cin>>modVal;
    calculatePower(n,power,modVal);
    return 0;
}