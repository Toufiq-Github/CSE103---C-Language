
#include <stdio.h>
#include <ctype.h>

int isVowel(char ch) {
    ch = tolower(ch);
    return (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u');
}

int main() {
    char line[1000];
    char *ptr;
    int vowels = 0, consonants = 0, digits = 0, spaces = 0, characters = 0, words = 1;

    printf("Enter a line: ");
    fgets(line, sizeof(line), stdin);

    ptr = line;

    while (*ptr != '\0') {
        characters++;
        if (isdigit(*ptr)) digits++;
        else if (isspace(*ptr)) spaces++;
        if (*ptr == ' ' || *ptr == '\n') words++;
        if (isalpha(*ptr)) {
            if (isVowel(*ptr)) vowels++;
            else consonants++;
        }
        ptr++;
    }

    printf("Words: %d\nDigits: %d\nConsonants: %d\nVowels: %d\nSpaces: %d\nCharacters: %d\n", words, digits, consonants, vowels, spaces, characters);

    return 0;
}
