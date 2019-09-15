#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    int a, b, sum=0, rev, temp, a_rev, b_rev;
    while(t--) {
        cin>>a>>b;
        a_rev = 0, b_rev = 0, rev = 0;
        while(a>0) {
            temp = a%10;
            a_rev = a_rev*10 + temp;
            a = a/10;
        }
        while(b>0) {
            temp = b%10;
            b_rev = b_rev*10 + temp;
            b = b/10;
        }
        sum = a_rev + b_rev;
        while(sum>0) {
            temp = sum%10;
            rev = rev*10 + temp;
            sum = sum/10;
        }
        cout<<rev<<endl;
    }
    return 0;
}