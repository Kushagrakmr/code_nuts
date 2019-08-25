#include<iostream>
using namespace std;

int main() {
  int t, n;
	long long total, sum, comp;
	cin>>t;
	while(t--) {
	  cin>>n>>sum;
	  total = 0;
	  long int arr[n];
	  for(int i=0; i<n; i++) {
	      cin>>arr[i];
	      total += arr[i];
	  }
	    
    comp = 0;
    int j = 0, flag = 0;
	  for(int i=0; i<n; i++) {
      comp += arr[i];

      if(comp == sum) {
        flag =1;
        cout<<j<<i<<endl;
        break;
      }
      if(comp > sum){
        comp = comp-arr[j];
        j++;
      }
    }

    if(flag == 1)
      cout<<"-1"<<endl;

  return 0;
}