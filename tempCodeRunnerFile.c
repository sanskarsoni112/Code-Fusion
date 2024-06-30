#include <stdint.h> // This header file provides exact-width integer types.
#include <stdio.h>  // This header file provides functions for standard input and output.

// Mock function to simulate serial initialization, if you don't have the actual function.
void serial_init(void) {
    // Implementation would go here for actual hardware; for now, it can be empty.
}

int main(void) {
    // Initialize serial communication on the QUTy.
    serial_init();

    // EX: 4.0
    // Declare and initialize a variable to represent an unsigned 16-bit integer.
    unsigned short c_release = 1972;
    printf("C was first released by Dennis Ritchie in the year %u.\n", c_release);

    // EX: 4.1
    // Initialize the variables 'x' and 'parity' to calculate the result.
    int16_t x = 22; // Replace 22 with the actual value needed.
    uint8_t parity = 1; // Set to 1 if the condition is true, otherwise 0.

    // Calculate the result based on the value of 'parity'.
    uint8_t result;
    if (parity) {
        result = (3 - 1) * x - (-50) - 1;
    } else {
        result = (3 - 1) * x + (-50);
    }
    printf("The result is %u.\n", result);

    // EX: 4.6
    // Calculate the time of Neptune's next orbit after the UNIX epoch.
    int64_t seconds_since_epoch = 0; // Initialize with the current seconds since epoch.
    int64_t neptune_orbital_period_days = 60190;
    int64_t neptune_orbital_period_seconds = neptune_orbital_period_days * 24 * 3600;
    seconds_since_epoch += neptune_orbital_period_seconds;

    printf("Time of Neptune's next orbit after the UNIX epoch: %ld%09ld.\n",
           (int64_t)(seconds_since_epoch / 1000000000),
           (int64_t)(seconds_since_epoch % 1000000000));

    // Loop indefinitely.
    while (1);

    return 0; // End of the main function.
}
