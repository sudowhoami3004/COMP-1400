/*
    Write a C function, distance, that receives four double floating-point numbers, x1, y1, x2, and y2. This
    function should compute and return the custom distance of two points with the coordination (x1, y1) and 
    (x2, y2), using the equation d = sqrt((x2 - x1)^5 + (y2 - y1)^5).
*/

#include <stdio.h>
#include <math.h>

double distance(double x1, double y1, double x2, double y2) {
    return sqrt(pow(x2 - x1, 5) + pow(y2 - y1, 5));
}

int main() {
    double x1, y1, x2, y2;
    printf("Enter the x and y coordinates of the first point: ");
    scanf("%lf %lf", &x1, &y1);
    printf("Enter the x and y coordinates of the second point: ");
    scanf("%lf %lf", &x2, &y2);
    printf("Custom distance between the two points is: %lf\n", distance(x1, y1, x2, y2));
}