#include<iostream>
#include<string>
#include<string.h>
#include<unordered_map>
#include<algorithm>
#define deb(x) cout<<#x<<" "<<x<<endl;

using namespace std;

void find_pattern(string txt, string pat) {
    int m = txt.length();
    int n = pat.length();
    int count = 0;

    hash<string> hasher;
    size_t hash, temp;
    char comp[3];

    hash = hasher(pat);
    for(int i=0; i<m-n; i++) {
        txt.copy(comp, n, i);
        temp = hasher(comp);

        if(temp == hash) {
            //comparing each char of pat with str where the hash is found to be the same
            for(int j=0; j<n; j++) {
                if(comp[j] != pat[j]) {
                    break;
                }
                if(j == n-1)
                    cout<<"Pattern Found"<<endl;
            }

        }
    }
}

int main() {

    string txt = "heyisthisworkingheyifheycanyouheyifyouheyhhheeyhey";
    string pat = "hey";

    find_pattern(txt, pat);

    return 0;
}