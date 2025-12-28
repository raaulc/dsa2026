#include<iostream>
using namespace std; 

int main(){
    int n,m; cin >> n >> m;
    int arr[n][m];

    for(int col=m-1;col>=0;col--){
        for(int row=n-1;row>=0;row--){
            cin>>arr[row][col];
        }
    }

    for(int row=0;row<n;row++){
        for(int col=0;col<m;col++){
            cout<<arr[row][col]<< " ";
        }
    }

    return 0;
}