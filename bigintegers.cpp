#include <iostream>

using namespace std;

//Function to multiply a certain number with the large no. stored in the array.
void multiply(int *result, int&, int&);

int main() {
  int find_fact; //The no to which we need to find the factorial
  int size_of_res = 1; // The size of the array, initially 1

  // The array in which the no are stored from right to left opposite of how written in real life(left to right)
  // You can increase the size of array as per your need.
  int res[200] = {0};
  res[0] = 1; // Initializing the initial factorial to be 1

  cout<<"Enter the no. :";
  cin>>find_fact;

  while(find_fact) {
    multiply(res, find_fact, size_of_res);// Passing the value by reference to the function for each no. to multiply
    find_fact--;
  }

  //Loop to print the no. stored in the array. We need to print the elements in the reverse order as the no is stored in reverse order right to left
  for(int i=size_of_res-1; i>=0; i--) {
    cout<<res[i];
  }

  return 0;
}


//Here we will multiply the no the old way multiplying the no digit by digit and adding the carry to the next
void multiply(int *result,  int& x,  int& _size) {
  int carry = 0; // Initializing the carry as 0
  int i;

  //For multiplying and updating the array with the right no

  for(i =0; i<_size; i++) {
    int prod = result[i]* (x) + carry;
    result[i] = prod%10;
    carry = prod/10;
  }

  //Now we need to append the carry to the result array digit by digit in the reverse order
  i = _size;
  while(carry) {
    result[i] = carry%10;
    carry = carry/10;
    i++;// Making sure that the no are appended the right way
    _size++; // As we append the no the size of the array increases
  }
}
