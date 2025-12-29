//
// Created by Rahul Rathod on 29/12/2025.
//

#include<iostream>
using namespace std;

int main() {
    int n,m;
    cin >> n >> m;

    int arr[n][m];
    for (int row=0;row<n;row++) {
        for (int col=0;col<m;col++) {
            cin>>arr[row][col];
        }
    }

    int sr=0,sc=0;
    int er=n-1,ec=m-1;

    while (sr<=er and sc<=ec) {
        //left to right
        for (int i = sc; i <= ec; i++) cout << arr[sr][i] << " ";
        sr++;

        //up to down
        for (int i = sr; i <= er; i++) cout << arr[i][ec] << " ";
        ec--;

        //right to left
        for (int i = ec; i >= sc; i--) cout << arr[er][i] << " ";
        er--;

        //bottom to top
        for (int i = er; i >= sr; i--) cout << arr[i][sc] << " ";
        sc++;
    }

    return 0;
}