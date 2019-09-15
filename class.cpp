#include<iostream>
#include<string>

using namespace std;

class K {
    string name;
    public:
    K (string n) {
        n = name;
    }

    void show() {
        cout<<name;
    }

};

int main() {
    K a("anamika");
    K k("kush");

    a.show();
    k.show();

    return 0;
}