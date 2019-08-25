#include<iostream>
using namespace std;

int main() {
  long long T,no_of_coins;
  long long int arr[200000000],i;
  long double sum_of_coins=0, avg;
  cin>>T;

  while(T--) {
    cin>>no_of_coins;

    double mean;
    sum_of_coins = 0;

    for(i=0; i<no_of_coins; i++) {
      cin>>arr[i];
      sum_of_coins += arr[i];
    }

    avg = sum_of_coins/no_of_coins;

    int flag=0;
    for(i=0; i<no_of_coins; i++) {
      mean = (sum_of_coins-arr[i])/(no_of_coins-1);

      if(mean == avg) {
        flag = 1;
        cout<<i+1<<endl;
        break;
      }
    }

    if(flag == 0) 
      cout<<"Impossible\n";
  }

  return 0;
}