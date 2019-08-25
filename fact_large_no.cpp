#include<iostream>
using namespace std;

void extraLongFactorials(int n) {
  char arr[200];
  int size = 1;
  arr[0] = '1';

  int carry, i, j, mul;

  for(i=1; i<=n; i++) {
    carry = 0;
    for(j=0; j<size; j++) {
      mul = (int(arr[j])*i)+carry;
      arr[j] = char(mul%10);
      carry = mul/10;
    }

    while(carry) {
      arr[j] = char(carry%10);
      size++;
      j++;
      carry = carry/10;
    }
  }

  for(i=size-1; i>=0; i--) {
    cout<<arr[i];
  }

}

int main() {

  int n;
  cin>>n;

  extraLongFactorials(n);  

  return 0;            
}