#include<iostream>
using namespace std;

int main(){
    string s; 
    cin >> s; 

    int first = s[0]-'a';
    int second = s[1]-'a';

    int totalBefore= first*25;

    cout<<totalBefore+second<<endl;
    return 0;
}