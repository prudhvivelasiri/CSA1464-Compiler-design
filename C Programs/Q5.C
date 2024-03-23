#include <stdio.h>

int main() {
    char input[1000]; // Assuming input won't exceed 1000 characters
    int whitespace_count = 0;
    int newline_count = 0;
    
    printf("Enter a string: ");
    fgets(input, sizeof(input), stdin); // Read input from the user
    
    // Analyze each character in the input
    for (int i = 0; input[i] != '\0'; i++) {
        if (input[i] == ' ' || input[i] == '\t') {
            // Increment whitespace count for space or tab characters
            whitespace_count++;
        } else if (input[i] == '\n') {
            // Increment newline count for newline characters
            newline_count++;
        }
    }
    
    // Print the results
    printf("Number of whitespace characters: %d\n", whitespace_count);
    printf("Number of newline characters: %d\n", newline_count);
    
    return 0;
}
