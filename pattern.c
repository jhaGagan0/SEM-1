#include <stdio.h>

int main() {
    int n = 3; // Number of rows for the top half of the pattern
    
    // Loop for each row
    for (int i = 0; i < n; i++) {
        // Print leading spaces
        for (int j = 0; j < i; j++) {
            printf(" ");
        }
        // Print stars
        for (int j = 0; j < (2 * (n - i) - 1); j++) {
            printf("*");
        }
        // Move to the next line
        printf("\n");
    }
    return 0;
}
