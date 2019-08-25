#include<iostream>
using namespace std;

int main() {
  int arr[] = {-1,-2,-3,-2,-5,-9};
  int size = sizeof(arr)/sizeof(arr[0]);
  int max_so_far = arr[0], max_ending_here = arr[0];

  for(int i=1; i<size; i++) { 
    max_ending_here = max_ending_here + arr[i];

    if(max_ending_here < arr[i]) {
      max_ending_here = arr[i];
    }

    if(max_so_far < max_ending_here) {
      max_so_far = max_ending_here;
    }
  }

  cout<<max_so_far;


  return 0;
}