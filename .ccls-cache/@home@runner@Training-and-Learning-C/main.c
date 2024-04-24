#include <stdio.h>
#include <string.h>

int main() {
    char* message = "Hello, world!"; // 'message' points to the first character of the string
    message = "Now it's this";       // 'message' now points to a new string literal

    // Printing the string using the pointer
    printf("%s\n", message);

    // Printing the address of the first character
    printf("The address of the first character is: %p\n", &message);
    // Printing the address of the second character
    printf("The address of the second character is: %p\n", &message + 1);

    return 0;
}

