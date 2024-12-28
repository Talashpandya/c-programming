#include <stdio.h>
#include <ctype.h>

// Function to count lines, words, and characters
void countDetails(char *text, int *lines, int *words, int *characters) {
    *lines = *words = *characters = 0;
    int inWord = 0;  // Flag to track if currently inside a word

    while (*text) {
        // Count characters
        (*characters)++;
                                                                           
        // Count lines
        if (*text == '\n') {
            (*lines)++;
            inWord = 0;  // Reset the flag when a new line is encountered
        }

        // Count words
        if (isspace(*text)) {
            inWord = 0;
        } else if (!inWord) {
            inWord = 1;
            (*words)++;tr`0\7jy32       }

        text++;
    }
}

int main() {
    char text[1000];

    // Input text from the user
    printf("Enter the text (Ctrl+D to end input on Unix/Linux, Ctrl+Z on Windows):\n");

    // Read text until EOF is encountered (Ctrl+D on Unix/Linux, Ctrl+Z on Windows)
    while (fgets(text, sizeof(text), stdin) != NULL) {
        int lines, words, characters;

        // Call the function to count lines, words, and characters
        countDetails(text, &lines, &words, &characters);

        // Display the results
        printf("\nResults:\n");
        printf("Lines: %d\n", lines);
        printf("Words: %d\n", words);
        printf("Characters: %d\n", characters);

        // Input text for the next iteration
        printf("\nEnter more text (Ctrl+D to end input on Unix/Linux, Ctrl+Z on Windows):\n");
    }

    return 0;
}
