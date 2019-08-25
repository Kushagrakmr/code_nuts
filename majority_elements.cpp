#include<iostream>
#include<vector>
#include<set>
#include<algorithm>

using namespace std;

int main() {
  int t,n,flag;
  cin>>t;
  vector<int> elements;
  set<int> distinct_elements;
  while(t--) {
    cin>>n;
    int temp;
    for(int i=0; i<n; i++) {
      cin>>temp;
      elements.push_back(temp);
      distinct_elements.insert(temp);
    }

    sort(elements.begin(), elements.end());
    
    flag = 0;
    vector<int>::iterator lower, upper;
    for(auto it = distinct_elements.begin(); it!= distinct_elements.end(); it++) {
      lower = lower_bound(elements.begin(), elements.end(), *it);
      upper = upper_bound(elements.begin(), elements.end(), *it);

      if((lower-upper) >= n/2){
        flag =1;
        cout<<*it<<endl;
        break;
      }
    }

    if(flag == 0) {
      cout<<"-1"<<endl;
    }

  }

  return 0;
}