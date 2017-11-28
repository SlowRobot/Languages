//Author: Arun Sathyan, 5114667
//Date:   6 September 2016
//Class:  T14A, Curtis Miller
//Name:   tnrip.c

//Reveses a string using dynamically allocated memory

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAXLEN 250

char *reverse_string(char s[MAXLEN]);

int main(int argc, char * argv[]) {

    //Given
    char s[MAXLEN];

    printf("Enter string:\n");
    fgets(s, MAXLEN, stdin);
    char *rev = reverse_string(s);
    printf("%s\n", rev);

    //Frees the memory
    free(rev);

    return EXIT_SUCCESS;
}

char *reverse_string(char s[MAXLEN]) {

    int i = 0;
    int length = strlen(s);

    //Assigning the memory to the reversing array
    char *reverse = malloc(sizeof(char) * length + 1);

    //Reversing the string
    while(i < length) {
        reverse[i] = s[length - 1 - i];
        i++;
    }

    //Placing in a null character
    reverse[i] = '\0';

    return reverse;
}
