#include<iostream>
using namespace std;

int main() {
  int arr[] = {1,0,2,1,2,1,0,2,1,0,1,0,2,2,0,2,2,0,1,0,2,0,1,0,1,2,1,2,2,0,1};
  int size = sizeof(arr)/sizeof(arr[0]);

  int low=0; // Keeps track of length till '0' occurs in arr. Used to keep track of element to be exchanged
  int mid=0; // Keeps track of length from where the element needs to be exhanged in case of '0' or '2'
  int high = size-1;//Keeps track of other end of array where 2 needs to be stored

  while(mid<= high) {
    if(arr[mid] == 0) {
      swap(arr[low], arr[mid]);
      low++;
      mid++;
    } else if(arr[mid] == 1) {
      mid++;
    } else {
      swap(arr[mid], arr[high]);
      high--;
    }
  }

  for(int i=0; i<size; i++) {
    cout<<arr[i]<<' ';
  }

  return 0;
}