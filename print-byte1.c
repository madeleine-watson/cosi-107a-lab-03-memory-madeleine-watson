#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    for (int i = 1; i < argc; i++) {
        // Parse input as a number (support hex or decimal)
        long val = strtol(argv[i], NULL, 0);

        // Extract byte 1: shift right by 8 bits, then mask
        int byte1 = (val >> 8) & 0xFF;

        // Print arg number, hex, and decimal
        printf("0x%02X %3d\n", byte1, byte1);
        
    }

    return 0;
}
