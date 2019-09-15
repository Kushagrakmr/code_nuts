#include<iostream>
#include<vector>
#include<algorithm>
#include<queue>

using namespace std;

int main() {
    int t, n;
    long long sum;
    cin>>t;
    while(t--) {
        priority_queue<int, vector<int>, greater<int> > arr; //Creates a min heap
        cin>>n;
        sum = 0;
        int temp, x, y;
        while(n--) {
            cin>>temp;
            arr.push(temp);
        }

        while(arr.size() > 1) {
            x = arr.top();
            arr.pop();
            y = arr.top();
            arr.pop();
            sum += x + y;
            arr.push(x+y);

        }
        cout<<sum<<endl;
    }

    return 0;
}