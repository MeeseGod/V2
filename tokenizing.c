// TOKENIZING MODULE SORCE
// Define macros
#define _CRT_SECURE_NO_WANINGS
#define BUFFER_SIZE 300
#include "tokenizing.h"

// V2
    printf("*** Start of Tokenizing Phrases Demo");
    // Declare needed variables
    char    phrases[BUFFER_SIZE];
    char*   nextPhrase = NULL;
    int     phrasesCounter;
    // Enter main loop
    do{
        // Get input
        printf("Type a few phrases seperated by comma(q - to quit):\n");
        fgets(phrases, BUFFER_SIZE, stdin);
        // Set null terminator
        phrases[strlen(phrases) - 1] = '\0';
        // Compare phrases var to "q"
        if((strcmp(phrases, "q") != 0)){
            nextPhrase = strtok(phrases, ",");
            phrasesCounter = 1;
            while(nextPhrase) {
                printf("Phrase #%d is \'%s\'\n", phrasesCounter++, nextPhrase);
                nextPhrase = strtok(NULL, ",");
            }
        }
    }while(strcmp(phrases, "q") != 0);
    printf("*** End of Tokenizing Words Demo ***\n\n");