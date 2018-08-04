#include <stdio.h>
#include <stdlib.h>

int dist(int col, int y, int num);
int max(int a, int b);
int abs(int a);

int main(int argv, char * argc[]) {

    int number = 0;

    printf("Enter number: ");
    scanf("%d", &number);

    int alt = 1;

    for(int row = 0; row < number; row++) {
        for(int col = 0; col < number; col++) {
            if(row == (col + 1)) {
                if(alt) {
                    printf("-");
                    alt = 0;
                } else {
                    printf("#");
                    alt = 1;
                }
            } else if(dist(col, row, number)) {
                printf("#");
            } else {
                printf("-");
            }
        }
        printf("\n");
    }
}

int dist(int x, int y, int num) {

    int dist = max(abs(x - num / 2), abs(y - num / 2));
    if(dist % 2 == 0) {
        if(num % 4 == 1) {
            return 1;
        } else {
            return 0;
        }

    }
    if(num % 4 == 1) {
        return 0;
    } else {
        return 1;
    }
}

int max(int a, int b) {
    if(a > b) {
        return a;
    }

    return b;
}

int abs(int a) {
    if(a < 0) {
        a *= -1;
    }
    return a;
}