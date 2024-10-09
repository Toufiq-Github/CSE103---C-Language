#include <stdio.h>
#include <string.h>
#include <ctype.h>

int isPalindrome(char *phrase) {
    int len = strlen(phrase);
    int left = 0, right = len - 1;

    while (left < right) {
        if (!isalnum(phrase[left])) left++;
        else if (!isalnum(phrase[right])) right--;
        else if (tolower(phrase[left]) != tolower(phrase[right])) return 0;
        else {
            left++;
            right--;
        }
    }
    return 1;
}

int main() {
    char phrase[1000];

    printf("Enter a phrase: ");
    fgets(phrase, sizeof(phrase), stdin);

    if (isPalindrome(phrase))
        printf("The phrase is a palindrome.\n");
    else
        printf("The phrase is not a palindrome.\n");

    return 0;
}

