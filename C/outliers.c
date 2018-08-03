#include <stdio.h>
#include <stdlib.h>

int main(int argv, char * argc[]) {

    int number = 0;
    int numRead = 0;
    int counter = 0;
    printf("Enter a number: ");
    while((numRead = scanf("%d", &number)) == 1) {
        if(number < 5 || number > 25) {
            counter++;
        }
        printf("Enter a number: ");
    }
    printf("\nOutliers: %d\n", counter);

    return EXIT_SUCCESS;
}