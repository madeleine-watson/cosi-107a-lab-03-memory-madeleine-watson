
#include <stdio.h>

void crash(int *iptr) {
    int *x = iptr;  

    printf("I'm going to print x!\n");
    printf("The value of *x is %d\n", *x);  
}

int main(int argc, char **argv) {
    printf("We're going to crash!\n");
    int value = 42;
    crash(&value);  
    printf("Back after the crash?\n");
    return 0;
}
