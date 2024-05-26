#include <util.h>

void inspect_uint(uint32_t number) {
    char bytes[4];

    // Step 2: Create a void pointer and point it to the integer
    void *ptr = &number;

    // Step 3: Cast the void pointer to a char pointer and copy the bytes
    for (int i = 0; i < 4; i++) {
        bytes[i] = ((char *)ptr)[i];
    }

    // Print the result to verify
    printf("The bytes are:\n");
    for (int i = 0; i < 4; i++) {
        printf("Byte %d: 0x%02x\n", i, (unsigned char)bytes[i]);
    }
}
