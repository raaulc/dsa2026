#include<iostream>
using namespace std;

int main(){
    int num;cin>>num;
    int original = num, sum = 0, n = to_string(num).length();

    while(num>0){
        int digit = num%10;
        sum += pow(digit,n);
        num /= 10;
    }

    cout << sum == original ? "Yes" : "No";
    return 0;
}