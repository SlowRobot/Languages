
#include <stdio.h>
#include <stdlib.h>

#define TRUE 1
#define FALSE 0

int main(int argc, char * argv[]) {

    int num = 0;
    int rem = 0;
    int div = 2;
    int prime = TRUE;

    printf("Enter number: ");
    scanf("%d", &num);
    rem = num;

    while(div < num) {
        if(prime == TRUE && (rem % div) == 0) {
            printf("%d = %d", rem, div);
            rem = rem / div;
            prime = FALSE;
        } else if((rem % div) == 0) {
            rem = rem / div;
            printf("*%d", div);
        } else {
            div++;
        }
    }

    if(prime == TRUE) {
        printf("%d is a prime number\n", num);
    } else {
        printf("\n");
    }

    return EXIT_SUCCESS;
}
