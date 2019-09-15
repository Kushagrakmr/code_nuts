#include<bits/stdc++.h>
using namespace std;

int main() {
    int t,n, flag;
    cin>>t;
    while(t--) {
        cin>>n;
        stack <int> truck, order;
        int temp, size, j = 1;
        for(int i=0; i<n; i++) {
            cin>>temp;
            if( temp == j ) {
                order.push(temp);
                j++;
            } else {
                truck.push(temp);
            }
        }

        int flag = 0, comp = order.top()+1;
        if(order.size() == n){
            flag = 0;
        } else {
            while(!truck.empty()) {
                if(truck.top() != comp) {
                    flag = 1;
                    break;
                }
                comp++;
                truck.pop();
            }
        }


        if(flag)
            cout<<"NO\n";
        else
            cout<<"YES\n";

    }
    return 0;
}