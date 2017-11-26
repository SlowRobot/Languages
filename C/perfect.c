#include <stdio.h>
#include <stdlib.h>

int main(int argc, char * argv[]) {

    int num = 0;
    int div = 1;
    int sum = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    while(div < num) {
        if((num % div) == 0) {
            printf("%d\n", div);
            sum = sum + div;
        }
        div++;
    }

    printf("%d\n", num);

    if(sum == num) {
        printf("%d is a perfect number\n", num);
    } else {
        printf("%d is not a perfect number\n", num);
    }

    return EXIT_SUCCESS;
}
