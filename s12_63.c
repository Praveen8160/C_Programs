// practical 64: C program to write a sentence in a file and convert all lower case alphabets to uppercase and vice versa.

#include <stdio.h>
#include <ctype.h>

int main() 
{
    char sentence[1000];
    FILE *file;
    
    // Open a file for writing
    file = fopen("sentence.txt", "w");

    if (file == NULL) {
        printf("Error opening the file.\n");
        return 1;
    }

    printf("Enter a sentence: ");
    fgets(sentence, sizeof(sentence), stdin);

    for (int i = 0; sentence[i] != '\0'; i++) {
        if (islower(sentence[i])) {
            sentence[i] = toupper(sentence[i]);
        } else if (isupper(sentence[i])) {
            sentence[i] = tolower(sentence[i]);
        }
    }

    fprintf(file, "%s", sentence);

    printf("Modified sentence has been written to 'sentence.txt'.\n");

    fclose(file);

    return 0;
}
