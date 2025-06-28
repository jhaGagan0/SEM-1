#include <stdio.h>

// Global variable with external storage class
int globalVar = 10; 

// Function to demonstrate static storage class
void staticStorageClassExample() {
    static int staticVar = 0; // Static variable retains its value between function calls
    staticVar++;
    printf("Static Variable: %d\n", staticVar);
}

// Function to demonstrate automatic storage class
void autoStorageClassExample() {
    auto int autoVar = 5; // Auto variables are local by default (this keyword is optional in C)
    printf("Automatic Variable: %d\n", autoVar);
}

// Register variable demonstration
void registerStorageClassExample() {
    register int regVar = 50; // Register variable for faster access (stored in CPU registers)
    printf("Register Variable: %d\n", regVar);
}

// External storage class demonstration
void externStorageClassExample() {
    extern int globalVar; // Refers to the global variable defined earlier
    printf("External Variable (Global): %d\n", globalVar);
}

int main() {
    printf("Demonstrating Storage Classes in C:\n");

    // Automatic Storage Class
    autoStorageClassExample();

    // Static Storage Class
    printf("\nCalling staticStorageClassExample multiple times:\n");
    staticStorageClassExample();
    staticStorageClassExample();
    staticStorageClassExample();

    // Register Storage Class
    printf("\nRegister Storage Class:\n");
    registerStorageClassExample();

    // External Storage Class
    printf("\nExternal Storage Class:\n");
    externStorageClassExample();

    return 0;
}
