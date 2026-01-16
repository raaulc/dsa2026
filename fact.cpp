#include<iostream>
using namespace std; 
const int mod = 1e9+7;

// int gcd(int a, int b){
//     if(a==0 or b==0){
//         return a+b;
//     }
//     return gcd(b,a%b);
// }

// int main(){
//     int n;cin>>n;
//     int fact = 1; 
//     // for (int i = n; i > 0; i--) {
//     //     fact = (fact * i)%mod;
//     // }
//     int a,b; cin >> a >> b;
//     // a*b = gcd(a,b) * lcm(a,b)
//     int lcm = (a/gcd(a,b))*b;
//     cout << lcm << endl;
//     return 0;
// }

// int main(){
//     int n; cin >> n;
//     vector<int>d;

//     for(int i=1;i*i<=n;i++){
//         d.push_back(i);
//         if(i != (n/i))d.push_back(n/i);
//     }

//     sort(d.begin(),d.end());

//     for(int div:d){
//         cout<<div<<endl;
//     }

//     return 0;
// }

int main(){
    int n; cin >> n;
    for(int i=2;i*i<=n;i++){
        while(n%i==0){
            cout<<i<<" ";
            n /= i;
        }
    }
    if (n>1){
        cout<<n;
    }
    return 0;
}