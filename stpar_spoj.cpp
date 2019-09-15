#include<bits/stdc++.h>
using namespace std;

int main() {
    int t,n;
    cin>>t;
    while(t--) {
        cin>>n;
        vector<int> kush, new_order;
        stack <int> truck;
        int temp, comp =1;
        for(int i=0; i<n; i++) {
            cin>>temp;
            kush.push_back(temp);
        }

        for(int i=0; i<n; i++) {
            if(kush[i] == comp) {
                new_order.push_back(kush[i]);
                comp++;
                continue;
            } 
            truck.push(kush[i]);
        }

        for(int i=0; i<n; i++) {
            if
        }





    }
    return 0;
}