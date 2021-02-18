#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    FILE *fptr;
    if ((fptr = fopen("TXT-Files/File1.txt", "w")) == NULL) {
        printf("Error Opening File...");
        return 1;
    }
    char string[] = "Hello world!";
    if ((fprintf(fptr, string)) == EOF) {
        printf("Error Printing to File...");
        return 1;
    }
    if ((freopen("TXT-Files/File1.txt", "r", fptr)) == NULL) {
        printf("Reopening of File Failed...");
        return 1;
    }
    
    char string1[10], string2[10];
    if ((fscanf(fptr, "%s %s", string1, string2)) == EOF) {
        printf("Error Reading File...");
        return 1;
    }
    strcat(string1, " ");
    strcat(string1, string2);
    printf("%s\n", string1);
    fclose(fptr);
}