/*
Write a C function, distance, that receives four double floating-point numbers, x1, y1, x2, and y2. This
function should compute and return the custom distance of two points with the coordination (x1, y1) and
(x2, y2), using the equation d = sqrt((x2-x1)^5 + (y2-y1)^5)
*/

#include <stdio.h>
#include <math.h>

double Distance(double x1, double y1, double x2, double y2) {
    return sqrt(pow(x2 - x1, 5) + pow(y2 - y1, 5));
}

int main() {
    double x1, y1, x2, y2;
    printf("Enter the x1 value: ");
    scanf("%lf", &x1);
    printf("Enter the y1 value: ");
    scanf("%lf", &y1);
    printf("Enter the x2 value: ");
    scanf("%lf", &x2);
    printf("Enter the y2 value: ");
    scanf("%lf", &y2);

    double result = Distance(x1, y1, x2, y2);
    printf("Distance between (%.2lf, %.2lf) and (%.2lf, %.2lf) is: %.2lf", x1, y1, x2, y2, result);
}