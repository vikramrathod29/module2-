#include <stdio.h>
#include <string.h>

int main() {
    char sentence[200];
    int wordCount = 0, maxWordLength = 0, currentWordLength = 0;
    char longestWord[200] = {0};

    printf("Enter a sentence: ");
    scanf("%[^\n]s", sentence); 
    char tempWord[200] = {0};
    int tempIndex = 0;


    for (int i = 0; sentence[i] != '\0'; i++) {

        if (sentence[i] != ' ' && sentence[i] != '\t') {
            tempWord[tempIndex++] = sentence[i];
            currentWordLength++;
        } else {

            if (currentWordLength > 0) {
                wordCount++;


                if (currentWordLength > maxWordLength) {
                    maxWordLength = currentWordLength;
                    tempWord[tempIndex] = '\0';
                    strcpy(longestWord, tempWord);
                }


                currentWordLength = 0;
                tempIndex = 0;
            }
        }
    }


    if (currentWordLength > 0) {
        wordCount++;
        tempWord[tempIndex] = '\0';
        if (currentWordLength > maxWordLength) {
            maxWordLength = currentWordLength;
            strcpy(longestWord, tempWord);
        }
    }


    printf("Number of words: %d\n", wordCount);
    if (maxWordLength > 0) {
        printf("Longest word: %s (length: %d)\n", longestWord, maxWordLength);
    } else {
        printf("No words found in the sentence.\n");
    }

    return 0;
}

