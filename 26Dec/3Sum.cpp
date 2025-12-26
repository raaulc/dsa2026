#include<iostream>
#include<algorithm>
using namespace std;
int a=0;
int b=0;

bool twoSum(int arr[], int left, int right, int target,
            int &x, int &y) {
    while(left<right){
        int sum = arr[left] + arr[right];
        if(sum < target){
            left++;
        } else if(sum>target){
            right--;
        } else{
            x = arr[left];
            y = arr[right];
            return true;
            break;
        }
    }
    return false;
}

int main(){
    int n;cin>>n;

    int arr[n];
    for(int i=0;i<n;i++)cin>>arr[i];

    int target;cin>>target;

    int left = 0;
    int right = n-1; 

    bool found = false;

    sort(arr,arr+n);
    for(int i=0;i<n-2;i++){
        int a = arr[i];
        int x, y;
        int newTarget = target - a;

        if (twoSum(arr, i + 1, n - 1, newTarget, x, y)) {
            cout << a << " " << x << " " << y << endl;
            found = true;
            break;
        }
    }

    if (!found)
        cout << "No triplet found";

    return 0;
}