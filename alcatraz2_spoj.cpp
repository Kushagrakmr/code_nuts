#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main() {
    vector<int> money;
    int arr[8] = {0};
    int temp =0, pairs, sum = 0;
    vector<pair<int, int>> cold_war;
    for(int i=0; i<8; i++) {
        cin>>temp;
        money.push_back(temp);
        sum += temp;
    }

    cin>>pairs;
    int a, b;
    for(int i=0; i<pairs; i++) {
        cin>>a>>b;
        cold_war.push_back(make_pair(a,b));
    }

    int first=0, second = 0;
    for(int i=0; i<pairs; i++) {
        first = cold_war[i].first-1;
        second = cold_war[i].second-1;

        arr[second] += money[first];
        arr[first] += money[second];
    }

    for(int i=0; i<pairs; i++) {
        first = cold_war[i].first-1;
        second = cold_war[i].second-1;

        if(arr[first] > arr[second])
            sum -= money[first];
        else 
            sum -= money[second];

    }

    cout<<sum<<endl;

    return 0;
}