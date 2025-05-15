#include <stdio.h>

// Uninitialized global variable (in .bss)
int uninitialized_var;

// User-defined function
void my_function() {}

int main() {
    // Stack variable
    int stack_var = 0;

    // Initialized string constant (in .rodata)
    const char *str = "This is a string literal";

    // Print addresses in 48-bit hex with uppercase
    printf("stack variable:      0x%012lX\n", (unsigned long)&stack_var);
    printf("initialized data:    0x%012lX\n", (unsigned long)str);
    printf("uninitialized data:  0x%012lX\n", (unsigned long)&uninitialized_var);
    printf("main:                0x%012lX\n", (unsigned long)&main);
    printf("function:            0x%012lX\n", (unsigned long)&my_function);

    return 0;
}
