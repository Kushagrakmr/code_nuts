#include<iostream>
#include<string>
#include<string.h>
#include<unordered_map>
#include<algorithm>
#define deb(x) cout<<#x<<" "<<x<<endl;

using namespace std;

void find_pattern(string txt, string pat, int d, int q) {
    int n = txt.length();
    int m = pat.length();
    int h = 1;
    int p=0, t=0;

// What is h? and how is it calculated and why? and why "<m-1" why not <m
// couldn't figure out in book so borrowed from gfg
    for(int i=0; i<m-1; i++) {
        h = (h*d) % q;
    }

// Calculating the hash values of the pattern and the first m length of text
    for(int i=0; i<m; i++) {
        p = (d*p + pat[i]) % q;
        t = (d*t + txt[i]) % q;
    }

    for(int i=0; i<=n-m; i++) {
        if(p == t) {
            // Don't forget to implement the char wise checks for pattern matching
            cout<<"Pattern"<<endl;
        }

// The hash value now becomes obsolete. New hash value is computed for new string(a char from beginning is removed and a char to the end is added)
        if(i < n-m) {
            t = (d*(t-txt[i]*h) + txt[i+m])%q;

            if(t < 0)
                t += q;
        }
    }

}

int main() {

    int prime;
    string txt = "hyisthisworkingheyifheycanyouheyifyouheyhhheeyhey";
    string pat = "hey";
    // prime = 1000000007;
    prime = 97;
    int d = 256;

    find_pattern(txt, pat, d, prime);

    return 0;
}
