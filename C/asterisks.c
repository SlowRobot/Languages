#include <stdio.h>
#include <stdlib.h>

int main(int argc, char * argv[]) {

    int num1 = 0;
    int num2 = 0;

    scanf("%d", &num1);

    num2 = num1;

    while(num1 > 0) {
        while(num2 > 0) {
            printf("*");
            num2--;
        }

        num1--;
        num2 = num1;
        printf("\n");
    }

    return EXIT_SUCCESS;
}
