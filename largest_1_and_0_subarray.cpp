// #include<iostream>
// #include<algorithm>
// #include<climits>
// using namespace std;

// int main() {
//   int arr[] = {0, 1, 1, 0, 0, 0, 0, 1, 0, 1, 1, 1, 0, 0, 1, 0, 0, 0, 0, 0, 1, 0, 0};
//   int n = sizeof(arr)/sizeof(arr[0]);

//   int maxsize = -1, startIndex;
//   int sumleft[n];

//   int min, max, i;

//   for(i=0; i<n; i++)
//     if(arr[i] == 0)
//       arr[i] == -1;

//   sumleft[0] = arr[0];

//   for(i = 1; i<n; i++) {
//     sumleft[i] = sumleft[i-1] + arr[i];

//     if(sumleft[i] < min)
//       min = sumleft[i];

//     if(sumleft[i] > max) 
//       max = sumleft[i];
//   }

//   int hash[max-min+1];
//   for(i = 0; i<max-min+1; i++) 
//     hash[i] = -1;

//   for(i=0; i<n; i++) {
//     if(sumleft[i] == 0) {
//       maxsize = i+1;
//       startIndex = 0;
//     }

//     if(hash[sumleft[i]-min] == -1)
//       hash[sumleft[i] = min] = i;
//     else {
//       if((i-hash[sumleft[i]-min]) > maxsize) {
//         maxsize = i-hash[sumleft[i]-min];
//         startIndex = hash[sumleft[i]-min] + 1;
//       }
//     }

//     if(maxsize == 1)
//       cout<<"No such subarray";
//     else
//       cout<<startIndex <<"  "<< startIndex+maxsize-1<< endl;

//   }

//   return maxsize;
//   return 0;
// }


// ANOTHER APPROACH TO SAME QUESTION BY REPLACING 0 WITH -1 AND THEN USING KADANE ALGO TO FIND THE MAX_M SUBARRAY WITH SUM 0
#include<iostream>
#include<unordered_map>
#include<climits>
#include<algorithm>
using namespace std;

int main() {
  int arr[] = {1, 1, 0, 0, 0, 0, 1, 0, 1, 1, 1, 0, 0, 1, 0, 0, 0, 0, 0, 1, 0, 0};
  int n = sizeof(arr)/sizeof(arr[0]);

  unordered_map<int, int> m;
  int ans = 0, cur = 0;


  for(int i=0; i<n; i++) {
    cur += arr[i] ? 1 : -1; // Just while counting the sum add -1 instead of 0. Please doesn't change the array it won't work

    if(m.count(cur))
      ans = max(ans, i-m[cur]);
    else
      m[cur] = i;
  }

  cout<<ans;

  return 0;
}