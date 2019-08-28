#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
#include<set>
#include<string.h>
using namespace std;

void remove_dup(char *s) {
    if(s[0] == '\0' || s[1] == '\0')
        return;
    
    bool f = false;
    int n = strlen(s);
    for(int i=0; i<n-1; i++ ) {
        if(s[i] == s[i+1]) {
            f = true;
            int k=i, j=k+1;
            while(j<n && s[k] == s[j])
                j++;

            if(j==n)
                s[k] = '\0';
            while(j<n) {
                s[k] = s[j];
                k++;
                j++;
            }

            s[k] = '\0';
        } else {
            i++;
        }
    }

    if(f) {
        remove_dup(s);
    }
}


int main() {
    int n;
    cin>>n;
    char ch[n];
    cin>>ch;

    remove_dup(ch);
    cout<<ch;

    return 0;
}