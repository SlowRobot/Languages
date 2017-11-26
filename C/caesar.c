#include <stdio.h>
#include <stdlib.h>

int rotateRight(int ch);
int rotateLeft(int ch);
int encode(int ch, int shift);

int main(int argc, char * argv[]) {

    int ch = 0;
    int shift = 0;

    printf("Enter a shift: ");
    scanf("%d", &shift);

    printf("Enter text: ");

    ch = getchar();
    while(ch != EOF) {
        if(ch != '\n') {
            putchar(encode(ch, shift));
        } else if(ch == '\n') {
            printf("\n");
        }
        ch = getchar();
    }


    return EXIT_SUCCESS;
}

int rotateRight(int ch) {

    int newCh = 0;

    if(ch == 'z') {
        newCh = 'a';
    } else if(ch == 'Z') {
        newCh = 'A';
    } else {
        newCh = ch + 1;
    }

    return newCh;
}

int rotateLeft(int ch) {

    int newCh = 0;

    if(ch == 'a') {
        newCh = 'z';
    } else if(ch == 'A') {
        newCh = 'Z';
    } else {
        newCh = ch - 1;
    }

    return newCh;
}

int encode(int ch, int shift) {

    int counter = 0;

    if(shift < 0) {
        counter = -shift;
        while(counter > 0) {
            ch = rotateLeft(ch);
            counter--;
        }
    } else {
        counter = shift;
        while(counter > 0) {
            ch = rotateRight(ch);
            counter--;
        }
    }

    return ch;
}
