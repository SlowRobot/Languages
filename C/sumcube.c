#include <stdio.h>
#include <stdlib.h>

int main(int argc, char * argv[]) {

    int k = 0;
    int sum = 0;

    while(k < 16) {
        sum = sum + k*k*k;
        printf("%2d %5d\n", k, sum);
        k++;
    }

    return EXIT_SUCCESS;
}
