// Write a C program to compute the perimeter and area of a circle with a given radius.

#include <stdio.h>

int main() {
    int radius;
    float area, perimeter;
    radius = 100;

    perimeter = 2 * 3.14 * radius;
    printf("Perimeter of the Circle = %f inches \n", perimeter);

    area = 3.14 * radius * radius;
    printf("Area of the Circle = %f square \n", area);

    return 0;
}