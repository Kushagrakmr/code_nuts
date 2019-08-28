#include<iostream>
#include<string>
#include<stack>
#include<algorithm>

using namespace std;

int main() {
    string ss = "i.like.it.very.much";
    string kush;
    stack <string> s;
    ss += '.';
    for(int i=0; i<ss.size(); i++) {
        if(ss[i] != '.') {
            kush += ss[i];
            continue;
        }
        s.push(kush);
        s.push(".");
        kush = "";
        
    }
    s.pop();

    while(!s.empty()) {
        cout<<s.top();
        s.pop();
    }

    return 0;
}

