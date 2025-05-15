#include <stdio.h>

int main() {
    // Declare variables
    int my_int = 978;
    int *int_ptr;
    char char_array[200];
    char *char_ptr;

    // Print sizes of various types
    printf("size of char is %zu\n", sizeof(char));
    printf("size of short is %zu\n", sizeof(short));
    printf("size of int is %zu\n", sizeof(int));
    printf("size of long is %zu\n", sizeof(long));
    printf("size of long long is %zu\n", sizeof(long long));
    printf("size of float is %zu\n", sizeof(float));
    printf("size of double is %zu\n", sizeof(double));
    printf("size of char * is %zu\n", sizeof(char *));
    printf("size of int * is %zu\n", sizeof(int *));
    printf("size of long * is %zu\n", sizeof(long *));

    // Print size of the character array
    printf("The size of my character array is %zu\n", sizeof(char_array));

    // Set the character pointer to point to the character array
    char_ptr = char_array;

    // Print size of the character pointer
    printf("The size of my character pointer is %zu\n", sizeof(char_ptr));

    // Set the integer pointer to point to the integer variable
    int_ptr = &my_int;

    // Print size of the integer pointer
    printf("The size of my int pointer is %zu\n", sizeof(int_ptr));

    // Print size of what the integer pointer points at
    printf("The size of what my integer pointer points at is %zu\n", sizeof(*int_ptr));

    return 0;
}