#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int n;cin>>n;
    vector<int> primeFact;
    
    for(int i=2;i<=n;i++){
        while(n%i==0){
            primeFact.push_back(i);
            n /= i;
        }
    }

    for(int prime: primeFact)cout<<prime<<" "; 
}

//36
//2*18,2*9,3*3,3*1