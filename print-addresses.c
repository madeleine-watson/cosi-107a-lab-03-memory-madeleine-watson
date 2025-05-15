#include <stdio.h>
#include <stdlib.h>
#include <inttypes.h>  // For PRIu64

int main(int argc, char *argv[]) {
    if (argc < 2) {
        fprintf(stderr, "Usage: %s <decimal numbers>\n", argv[0]);
        return 1;
    }

    for (int i = 1; i < argc; i++) {
        // Use strtoull to get unsigned 64-bit number
        unsigned long long val = strtoull(argv[i], NULL, 10);

        // Mask to 48 bits and print in uppercase hex with 0x prefix
        printf("0x%012llX\n", val & 0xFFFFFFFFFFFFULL);
    }

    return 0;
}
