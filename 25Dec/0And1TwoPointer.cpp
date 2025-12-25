#include<iostream>
using namespace std; 

int main(){
    int n;cin>>n;
    
    int arr[n];
    for(int i=0;i<n;i++)cin>>arr[i];

    int p0 = 0;
    int p1 = n-1;

    while(p0<p1){
        if(arr[p0] == 0){
            p0++;
        } else if (arr[p1] == 1){
            p1--;
        } else {
            swap(arr[p0],arr[p1]);
            p0++;
            p1--;
        }   
    }
    for (int i = 0; i < n; i++)cout << arr[i] << endl;
    return 0;
}