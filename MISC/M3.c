// Write a program to count the number of words, vowels, and consonants in a given string.
#include <stdio.h>
#include <ctype.h>
#include <string.h>

int isVowel(char c) {
    c = tolower(c);
    return (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');
}

int main() {
    char str[1000];
    int words = 0, vowels = 0, consonants = 0;
    int i, len, inWord = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    
    len = strlen(str);
    
    for(i = 0; i < len; i++) {
        // Check for vowels and consonants
        if(isalpha(str[i])) {
            if(isVowel(str[i])) {
                vowels++;
            } else {
                consonants++;
            }
            
            // Count words
            if(!inWord) {
                inWord = 1;
                words++;
            }
        } else if(str[i] == ' ' || str[i] == '\n' || str[i] == '\t') {
            inWord = 0;
        }
    }
    
    printf("Words: %d\n", words);
    printf("Vowels: %d\n", vowels);
    printf("Consonants: %d\n", consonants);
    
    return 0;
}