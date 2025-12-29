//
// Created by Rahul Rathod on 29/12/2025.
//

#include<iostream>
#include<algorithm>
using namespace std;

int main() {
    int n,m;
    cin>>n>>m;

    int arr[n][m];
    if (n != m) {
        cout << "not a square one" << endl;
        return 0;
    }

    for (int row=0;row<n;row++) {
        for (int col=0;col<m;col++) {
            cin>>arr[row][col];
        }
    }

    // reverse each row
    for (int row=0;row<n;row++) {
        int left = 0; int right = m-1;
        while (left<right) {
            swap(arr[row][left], arr[row][right]);
            left++;
            right--;
        }
    }

    // swap things now
    for (int row=0;row<n;row++) {
        for (int col=row+1;col<m;col++) {
            if (row != col) {
                swap(arr[row][col],arr[col][row]);
            }else {
                continue;
            }
        }
    }

    //print
    for (int row=0;row<n;row++) {
        for (int col=0;col<m;col++) {
            cout<<arr[row][col]<<" ";
        }
        cout<<endl;
    }


    return 0;
}