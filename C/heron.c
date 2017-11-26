#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char * argv[]) {

    float a = 0;
    float b = 0;
    float c = 0;


    printf("Enter sidelengths of a triangle:\n");
    scanf("%f %f %f", &a, &b, &c);

    float s = (a + b + c)/2;
    float squareArea = s*(s-a)*(s-b)*(s-c);


    if (squareArea >= 0) {
        float area = sqrt(squareArea);
        printf("Area: %.2f\n", area);
    } else {
        printf("These lengths do not form a triangle\n");
    }

    return EXIT_SUCCESS;
}
