#include <stdio.h>

int f() {
    int j = 0;
L1:
    ++j;
    if (10 == j) {
        goto L2;         // forward jump ignored
    }
    // ...
    goto L1;           // Noncompliant
L2:
    return ++j;        
}

int f2() {
    int j = 0;
L1:
    ++j;
    if (10 == j) {
        goto L2;         // forward jump ignored
    }
    // ...
    goto L1;           // Noncompliant
L2:
    return ++j;        
}

// TODO add issues

int main() {
    f();
    f2();
    return 0;
}
