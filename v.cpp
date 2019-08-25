#include <stdio.h>
#include <iostream>
using namespace std;
int add(int n1, int n2) {
    return n1 + n2;
}

int caller(int n1, int n2, int(*functocall)(int, int)) {
    return (*functocall)(n1, n2);
}
int main() {
    int a, b, c;
    cin >> b >> c;
// declare the pointer to function p which is initialized to function add
    _____________________ = &add; // Line-1

// invoke the caller function to pass b, c and pointer to function caller
    a = _________________________; // Line-2

    printf("%d", a);

    return 0;
}