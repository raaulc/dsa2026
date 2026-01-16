#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int n;cin>>n;
    int arr[3];
    bool isPalindrome = true;

    for(int i=2;i>=0;i--){
        arr[i] = n%10;
        n /= 10;
    }
    
    int pt1=0;
    int pt2=2;

    while(pt1<pt2){
        //compare
        if(arr[pt1] != arr[pt2]){
            isPalindrome = false;
            break;
        }

        pt1++;
        pt2--;
    }

    cout << isPalindrome << endl;
    // for(int i=0;i<3;i++)cout<<arr[i]<<" ";


}
