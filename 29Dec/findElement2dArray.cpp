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

    int target;cin>>target;
    int row=n-1;
    int col=0;
    int found = false; 

    while(col<=m-1 and row>=0){
        if(arr[row][col]>target){
            row--;
        } else if(arr[row][col]<target){
            col++;
        } else {
            found = true;
            break;
        }
    }

    if(found){
        cout << "row " << row << " col " << col << endl;
    } else {
        cout << "not found"<<endl;
    }
    return 0;
}