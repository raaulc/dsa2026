#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int n;cin>>n;
    vector<int> fact;
    
    for(int i=1;i * i<=n;i++){
        fact.push_back(i);
        if(i * i != n){
            fact.push_back(n / i);
        } 

    }

    sort(fact.begin(), fact.end());

    for(int f: fact)cout<<f<<" "; 
}
