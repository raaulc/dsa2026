#include<iostream>
using namespace std;

int main(){
    int n;cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)cin>>arr[i];

    int currSum = arr[0];
    int maxSum = arr[0];

    for(int i=1;i<n;i++){
        currSum = max(arr[i],arr[i]+currSum);
        maxSum = max(currSum,maxSum);
    }

    cout<<maxSum<<endl;
    return 0;
}