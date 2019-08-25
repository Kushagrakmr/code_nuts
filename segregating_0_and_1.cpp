#include<iostream>
#include<array>
using namespace std;

int main() {
  int arr[] = {1,0,1,0,1,0,0,1,0,0,0,0,1,0,};
  int size = sizeof(arr)/sizeof(arr[0]);

  int right = size-1;
  int left = 0, temp;

  while(left < right) {
    //Keep going untill you find 1 at some index so that you can replace it with right
    while(arr[left] == 1) { // Changing 1 to 0 and in next while 0 to 1 will result in array in descending oreder
      left++;
    }

    //Keep going untill you find 0 at some index so that you can replace it with left
    while(arr[right] == 0) {
      right--;
    }

    //The index found at left and right needs to be replaced as they contain 1 and 0 at each other positions;
    if(left < right) {
      temp = arr[left];
      arr[left] = arr[right];
      arr[right] = temp;
      left++;
      right--;
    }
  }

  for(int i=0; i<size; i++) {
    cout<<arr[i]<<" ";
  }

  return 0;
}