//Author: Arun Sathyan, 5114667
//Date:   6 September 2016
//Class:  T14A, Curtis Miller
//Name:   palindrome.c

//Checks if an input string is a palindrome

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

#define MAXLEN 250
#define TRUE 1
#define FALSE 0

int isPalindrome(char s[MAXLEN]);

int main(int argc, char * argv[]) {

    char s[MAXLEN];
    int check = TRUE;

    printf("Enter string:\n");
    fgets(s, MAXLEN, stdin);
    check = isPalindrome(s);

    if(check == FALSE) {
        printf("No, not a palindrome.\n");
    } else {
        printf("Yes, is a palindrome.\n");
    }

    return EXIT_SUCCESS;
}

int isPalindrome(char s[MAXLEN]) {

    int i = 0;
    int j = 0;
    int length = strlen(s);
    int check = TRUE;

    //Converts all the characters in the string to uppercase
    while(i < length) {
        s[i] = toupper(s[i]);
        i++;
    }

    i = 0;

    //Checking for the palindrome
    while(i < length) {
        if(isalpha(s[i]) && isalpha(s[length - 1 - j])) {
            if(s[i] != s[length - 1 - j]) {
                check = FALSE;
            }
            i++;
            j++;
            //Since it doesn't pass the above condition
            //At least one of the two is not part of the alphabet
            //The next two conditions determine which one isn't
        } else if(isalpha(s[i])) {
            j++;
        } else if(isalpha(s[length - 1 - j])) {
            i++;
            //If both are not part of the alphabet
        } else {
            i++;
            j++;
        }
    }

    return check;
}
