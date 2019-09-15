#include<iostream>
#include<queue>
#include<vector>
#include<algorithm>
using namespace std;

int main() {
    int n;
    priority_queue< int, vector<int>, greater<int> > kush;
    cin>>n;

    int temp;
    while(n--) {
        cin>>temp;
        kush.push(temp);
    }

    while (!kush.empty()) {
        temp = kush.top();
        kush.pop();
        cout<<temp<<" ";
    }
    
    return 0;
}