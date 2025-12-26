#include<iostream>
#include<algorithm>
using namespace std;

int main(){
    int n;cin>>n;

    int arr[n];
    for(int i=0;i<n;i++)cin>>arr[i];

    int target;cin>>target;

    int left = 0;
    int right = n-1; 

    sort(arr,arr+n);

    while(left<right){
        int sum = arr[left] + arr[right];

        if(sum > target){
            right--;
        } else if(sum<target){
            left++;
        } else{
            break;
        }
    }

    for(int i=0;i<n;i++)cout<<arr[i]<<endl;
    cout << "Result is Left " << left << " and Right " << right << endl;

    return 0;
}