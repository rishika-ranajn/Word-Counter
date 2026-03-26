#include <stdio.h>
#include <ctype.h>

int main() {
    char text[1000];
    int words = 0, characters = 0, lines = 1;
    int i = 0;

    printf("Enter a sentence:\n");
    fgets(text, sizeof(text), stdin);

    // Count characters, words, lines
    while (text[i] != '\0') {
        characters++;

        // Count words
        if ((text[i] == ' ' || text[i] == '\n' || text[i] == '\t') &&
            (text[i+1] != ' ' && text[i+1] != '\n' && text[i+1] != '\t' && text[i+1] != '\0')) {
            words++;
        }

        // Count lines
        if (text[i] == '\n') {
            lines++;
        }

        i++;
    }

    // If text is not empty, add 1 word
    if (characters > 1) {
        words++;
    }

    printf("\n Results:\n");
    printf("Characters: %d\n", characters);
    printf("Words: %d\n", words);
    printf("Lines: %d\n", lines);

    return 0;
}