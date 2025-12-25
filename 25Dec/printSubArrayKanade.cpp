#include<iostream>
using namespace std;

int main(){
    int n;cin>>n;
    int arr[n];

    for(int i=0;i<n;i++)cin>>arr[i];

    
    int currSum = arr[0];
    int maxSum = arr[0];
    int tempStart = 0;
    int start = 0;
    int end = 0;

    for(int i=1;i<n;i++){
        if(arr[i]>currSum+arr[i]){
            currSum = arr[i];
            tempStart = i;
        } else {
            currSum += arr[i];
        }

        if(currSum > maxSum){
            maxSum = currSum;
            start = tempStart;
            end = i;
        }
    }

    for(int i=start;i<=end;i++){
        cout<<arr[i]<<endl;
    }

    return 0;
}