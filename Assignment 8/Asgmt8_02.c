#include <stdio.h>
#include <string.h>

#define d 256  // Number of characters in the input alphabet

void rabinKarp(char *pattern, char *text, int q) {
    int patternLength = strlen(pattern);
    int textLength = strlen(text);
    int i, j;
    int patternHash = 0; // Hash value for the pattern
    int textHash = 0;    // Hash value for the text
    int h = 1;

    // The value of h would be "pow(d, patternLength-1) % q"
    for (i = 0; i < patternLength - 1; i++)
        h = (h * d) % q;

    // Calculate the hash value of the pattern and the first window of the text
    for (i = 0; i < patternLength; i++) {
        patternHash = (d * patternHash + pattern[i]) % q;
        textHash = (d * textHash + text[i]) % q;
    }

    // Slide the pattern over the text one by one
    for (i = 0; i <= textLength - patternLength; i++) {
        // Check the hash values of the current window of text and the pattern
        if (patternHash == textHash) {
            // Check for characters one by one
            for (j = 0; j < patternLength; j++) {
                if (text[i + j] != pattern[j])
                    break;
            }

            // If patternHash == textHash and pattern[0...patternLength-1] = text[i, i+1, ...i+patternLength-1]
            if (j == patternLength)
                printf("Pattern found at index %d\n", i);
        }

        // Calculate the hash value for the next window of text
        // Remove the leading digit and add the trailing digit
        if (i < textLength - patternLength) {
            textHash = (d * (textHash - text[i] * h) + text[i + patternLength]) % q;

            // We might get a negative value of textHash, converting it to positive
            if (textHash < 0)
                textHash = (textHash + q);
        }
    }
}

int main() {
    char text[] = "ABCCDDAEFG";
    char pattern[] = "CDD";
    int q = 101; // A prime number

    rabinKarp(pattern, text, q);

    return 0;
}