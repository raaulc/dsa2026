#include<iostream>
#include<vector>
#include<climits>
using namespace std;

int main(){
    int n;cin >> n;
    vector<long long> arr(n);
    long long minVal = INT_MAX, maxVal = -INT_MIN;

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        if (arr[i] < minVal){
            minVal = arr[i];
        } 
        if (arr[i] > maxVal){
            maxVal = arr[i];
        } 
    }

    long long countMin = 0, countMax = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] == minVal){
            countMin++;
        } 
        if (arr[i] == maxVal){
            countMax++;
        } 
    }

    long long diff = maxVal - minVal;
    long long ways = 0;

    ways = countMin * countMax;

    cout << diff << " " << ways << endl;

    return 0;

}