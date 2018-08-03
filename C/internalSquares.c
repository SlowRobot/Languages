#include <stdio.h>
#include <stdlib.h>

int main(int argv, char * argc[]) {
    int num = 0;

    printf("How many boxes: ");
    scanf("%d", &num);

    int baseNum = 3 + 4 * (num - 1);
    int i = 1;
    int j = 0;
    int k = 0;

    while(i < baseNum / 2 + 1) {
        while(j < i / 2) {
            printf("# ");
            j++;
        }
        while(k < baseNum - 2 * (i - 1)) {
            if(i % 2 - 1 == 0) {
                printf("#");
            }
            k++;
        }
        k = 0;
        while(k < baseNum - 2 * (i)) {
            if(i % 2 == 0) {
                printf(" ");
            }
            k++;
        }
        while(j > 0) {
            printf(" #");
            j--;
        }
        k = 0;
        i++;
        printf("\n");
    }

    i--;

    int l = 0;
    while(l < baseNum) {
        if(l % 2 == 0) {
            printf("#");
        } else {
            printf(" ");
        }
        l++;
    }
    printf("\n");

    while(i > 0) {
        while(j < i / 2) {
            printf("# ");
            j++;
        }
        while(k < baseNum - 2 * (i - 1)) {
            if(i % 2 - 1 == 0) {
                printf("#");
            }
            k++;
        }
        k = 0;
        while(k < baseNum - 2 * (i)) {
            if(i % 2 == 0) {
                printf(" ");
            }
            k++;
        }
        while(j > 0) {
            printf(" #");
            j--;
        }
        k = 0;
        i--;
        printf("\n");
    }

    return EXIT_SUCCESS;
}