

#include<iostream>
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    string isPalindrome(int num) {
        // Implement logic to check if num is a palindrome
        int reversed = 0, original = num;
        while(num>0){
            reversed = (reversed*10)+(num%10);
            num /= 10;
        }
        if(original == reversed){
            return "Yes";
        } else {
            return "No";
        }
    }
};

int main() {
    int num;
    cin >> num;
    Solution sol;
    cout << sol.isPalindrome(num) << endl;
    return 0;
}