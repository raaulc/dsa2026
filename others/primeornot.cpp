#include <iostream>
using namespace std;

bool isPrimeCheck(int& n){
    bool isPrime = true;
    for(int i=n-1;i>=2;i--){    
        if(n%i == 0){
            isPrime = false;
        }
    }
    return isPrime;
}

int main(){
    int n; cin >> n;
    int arr[n];
    int ptr = 0;

    for(int i=2;i<n;i++){
        if(isPrimeCheck(i)){
            arr[ptr] = i;
            ptr++;
        }
    }

    for(int i=0;i<ptr;i++){
        cout<<arr[i]<<endl;
    }

    return 0;
}