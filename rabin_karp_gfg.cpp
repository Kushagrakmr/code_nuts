#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
#include<unordered_map>
#include<string.h>

#define d 256; / no. of char in input alphabet
using namespace std;
// d-> a prime number

void search(char pat[], char txt[], int q) {
    int M = strlen(pat);
    int N = strlen(txt);

    int i,j;
    int p=0; // hash value for pattern
    int t=0; // hash value for text
    int h=1;

    // the value of h would be "pow(d, M-1)%q" ???HOW???
    for(i=0; i<M-1; i++) {
        h = (h*d) % q;
    }

    //calculating the hash value of pattern and first window of text
    for(i=0; i<m; i++) {
        p = (d*p + pat[i]%q);
        t = (d*t + txt[i]%q);
    }

}

int main() {



    return 0;
}