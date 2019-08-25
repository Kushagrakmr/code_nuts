#include <iostream>
#include <bits/stdc++.h>
using namespace std;

#define MAX 100001

/* basic sieve of eratosthenes used to get the list of prime numbers till the sqrt(n) and
* return the only prime numbers till the sqrt(n).
*/
vector <int>* sieve() {
   bool isPrime[MAX];
   memset(isPrime, true, sizeof(isPrime));

    for(int i=2; i*i<MAX; i++) {
        if(isPrime[i]){
            for(int j=i*i; j< MAX; j += i) {
                isPrime[j] = false;
            }
        }
    }

    vector<int>* primes = new vector<int>();
    primes->push_back(2);
    for(int i=3; i< MAX; i+= 2) {
        if(isPrime[i]) {
            primes->push_back(i);
        }
    }

    return primes;
}

void printPrimes(long long l, long long r, vector<int>* & primes) {
    bool isPrime[r-l+1];
    memset(isPrime, true, sizeof(isPrime));

    for(long long i=0; primes->at(i)*(long long)primes->at(i) <= r; i++) {
        long long currPrime = primes->at(i);
        long long base = ((l/currPrime))*(currPrime); //used to generate the previous no. which is in the range and is to be marked as in sieve of eratosthenes.
        if(base < l) { //if the no. turns out to be less than the lower bound then current prime then currPrime is added to it to  make it larger than the lowest bound
            base += currPrime;
        }
	// In this for loop, the numbers that are the multiple of the prime numbers and their multiple are marked false, same as in sieve of eratosthenes.
        for(long long j=base; j<=r; j+= currPrime) {
            isPrime[j-l] = false;
        }

        //If the base turns out to be zero then this case occurs, so the base becomes equal to the currPrime hence we need to mark this index as true as the above loop will make it false.
        if(base == currPrime) {
            isPrime[base-l] = true;
        }
    }

    for(long long i=0; i<=r-l; i++) {
        if(isPrime[i]== true) {
            cout<<i+l<<'\t';
        }
    }
}

int main()
{
  //Created a new int* vector named prime and it contains the list of all the prime numbers till sqrt(n) returned by the function sieve().
    vector<int>* primes = sieve();
    int t;
    cin>> t;
    while(t--) {
        long long l, r;
        cin>>l>>r;
        printPrimes(l,r,primes);
    }

    return 0;
}
