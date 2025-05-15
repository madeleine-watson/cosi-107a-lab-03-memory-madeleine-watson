#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    for (int i = 1; i < argc; i++) {
        // Convert input string to long using base 0 (auto-detect decimal or hex)
        long val = strtol(argv[i], NULL, 0);

        // Mask to low-order 8 bits
        int low8 = val & 0xFF;

        // Print argument number, hex value (uppercase, 0x), and decimal value
        // Widths: arg# (2), hex (6), decimal (3) — enough for all possible 8-bit values
        printf("%d 0x%02X %3d\n", i, low8, low8);

    }

    return 0;
}
