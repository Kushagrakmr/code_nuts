#include<iostream>
#include<string>
using namespace std;

int main() {
    string str;
    while(cin>>str) {
        int count1=0, count2=0,size = str.length(); 
        for(int i=0; i<size; i++) {
            if(i%2 == 0) {
                if(str[i] >= 97 && str[i]<=122) {
                    count1++;
                } else
                    count2++;	
            } else {
                if(str[i] >= 65 && str[i]<=90) {
                    count1++;
                } else
                    count2++;
            }
        }
        
        cout<<min(count1, count2)<<endl;
    }

    return 0;
}