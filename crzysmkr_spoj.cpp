#include<bits/stdc++.h>
using namespace std;

int main() {
    int t, mod;
    cin>>t;
    long long n;
    int arr[] = {0,8,5,2,10,7,4,1,9,6,3};
    while(t--) {
        cin>>n;
        n = (n%11);
        if(arr[n] == 0) {
            cout<<arr[0]<<endl;
        } else {
            cout<<11-arr[n]<<endl;
        }
    }

    return 0;
}