#include <stdlib.h>
#include <stdio.h>

int main(int argc, char * argv[]) {

    int num = 0;
    int count = 1;

    scanf("%d", &num);

    while(count <= num) {
        printf("%d\n", count);
        count = count + 2;
    }

    return EXIT_SUCCESS;
}
