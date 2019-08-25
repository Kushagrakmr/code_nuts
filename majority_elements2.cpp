#include<iostream>
#include<vector>
#include<set>
#include<algorithm>

using namespace std;

int main() {
  int t,n,flag;
  int arr[10000];
  cin>>t;
  while(t--) {
    cin>>n;
    int temp;
    vector<int> elements;
    set<int> d_elements;

    for(int i=0; i<n; i++) {
      cin>>temp;
      elements.push_back(temp);
      d_elements.insert(temp);
    }

    sort(elements.begin(), elements.end());
    
    vector<int>::iterator lower,upper;
    int diff = 0;
    flag = 0;
    for(auto it=d_elements.begin(); it!=d_elements.end(); it++) {
      lower = lower_bound(elements.begin(), elements.end(), *it);
      upper = upper_bound(elements.begin(), elements.end(), *it);

      diff = ((upper-element.begin())-(lower-element.begin()));

      if(diff >= (n+1)/2) {
        cout<<*it<<endl;
        flag = 1;
        break;
      }
    }

    if(flag == 0)
      cout<<"-1"<<endl;
  }

  return 0;
}