#include<iostream>
using namespace std;

int main(){
    int num;cin>>num;
    vector<int> arr;
    
    for(int i=2;i*i<=num;i++){
        if(num%i == 0){
            arr.push_back(i);
            if(i!=num/i){
                arr.push_back(num/i);
            }
        }
    }

    sort(arr.begin(),arr.end());

    for(int f:arr)cout<<f<<endl;

    return 0;
}