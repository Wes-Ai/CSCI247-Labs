#include <stdio.h>
#include <math.h>

int main() {
    int bits, page_bytes;
    printf("How many bits? ");
    scanf ("%d", &bits);
    printf("How many bytes? ");
    scanf ("%d", &page_bytes);

    double page_offset = log2(page_bytes);  // / (bits/8)
    double page_bits = bits - page_offset;

    printf("Page bits=%d, offset bits=%d\n", (int)page_bits, (int)page_offset);

    // printf("Enter address in hex: ");
    // printf("Page No=0xa, Offset=0x123");
    return 0;
}