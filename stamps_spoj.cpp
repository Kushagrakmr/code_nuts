#include<bits/stdc++.h>
using namespace std;

int main() {
    int t, u_lim,n, x=0;
    cin>>t;
    while(t--) {
        int comp=0, temp, flag = -1;
        cin>>u_lim>>n;

        vector<int> kush; kush.resize(n);

        for(int i=0; i<n; i++ ) {
            cin>>temp;
            kush.push_back(temp);
        }

        sort(kush.begin(),kush.end(), greater<int>());
        for(int i=0; i<n; i++) {
            comp += kush[i];
            if(comp >= u_lim) {
                flag = i+1;
                break;
            }
        }

        if(flag != -1) {
            cout<<"Scenario #"<<++x<<":"<<endl<<flag<<endl;
        } else {
            cout<<"Scenario #"<<++x<<":"<<endl<<"impossible"<<endl;
        }
        cout<<endl;
    }
    return 0;
}