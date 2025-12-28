#include<iostream>
using namespace std; 

int main(){
    int n,m;
    cin>>n>>m;

    int arr[n][m];

    for(int row=0;row<n;row++){
        for(int col=0;col<m;col++){
            cin>>arr[row][col];
        }
    }

    cout << "all rows border " << endl;
    for(int row=0;row<n;row++){
        for(int col=0;col<m;col++){
            if(row==0 || row==n-1){
                cout<<arr[row][col]<<" ";
            }
        }
    }

    cout<<endl;

    cout << "all cols border " << endl;
    for(int col=0;col<n;col++){
        for(int row=0;row<m;row++){
            if(col==0 or col==n-1){
                cout<<arr[row][col]<<" ";
            }
        }
    }

    return 0;
}