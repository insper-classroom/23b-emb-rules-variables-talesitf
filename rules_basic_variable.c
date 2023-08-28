#include "stdio.h"

// ..

void foo(int *a) {
    *a = *a + 1; // acessa variavel pelo ponteiro
}

void main(void) {
    int a = 0; // var local
    int b = 0; // var local
    while (1) {
        foo(&a);
        
        if (a > 5) {
            b = 1;
        }
    }
}
