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
    int row=0;
    int col=m-1;
    int found = false; 

    while(row<=n-1 and col>=0){
        if(arr[row][col]>target){
            col--;
        } else if(arr[row][col]<target){
            row++;
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