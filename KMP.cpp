#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int* create_lps(string ss) {
    //ss = "abcdabeabf"
    //      0000120120
    int n = ss.length();
    int *lps;
    lps = new int[n];
    lps[0] = 0;
    int equal, j,k;

    for(int i=1; i<n; i++) {
        if(ss[i] != ss[0]) {
            lps[i] = 0;
        } else {
            j = 1;
            equal = 0;
            lps[i] = ++equal;
            while(ss[i+1] == ss[j]) {
                lps[i+1] = ++equal;
                j++;
                i++;
            }
        }
    }

    return lps;
}

void find_pattern(string txt, string pat) {
    int * lps = create_lps(pat);
    // for(int i=0; i<pat.length(); i++)
    //     cout<<lps[i]<<" ";
    int i= 0,j = 0; 
    while(i<txt.length()) {
        if(txt[i] == pat[j]) {
            i++;
            j++;
        }

        if(j==pat.length()) {
            cout<<"pattern found  "<<i-j;
            j = lps[j-1];
        } else if (i<txt.length() && pat[j] != txt[i]) {
            if(j!=0)
                j = lps[j-1];
            else 
                i++;
        }
    }
}

int main() {

    string txt = "ababcabcabababd";
    string pat = "ababd";
    find_pattern(txt, pat);

    return 0;
}