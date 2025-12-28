#include<iostream>
using namespace std; 

int main(){
    int m; int n;
    cin >> n >> m;
    int arr[n][m];

    for(int row=0;row<n;row++){
        for(int col=0;col<m;col++){
            cin>>arr[row][col];
        }
    }

    for(int i=0;i<min(m,n);i++)cout<<arr[i][i]<< " ";

    return 0;
}