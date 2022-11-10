#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define PI 3.1416
const double pi = 22.0/7.0;

int main()
{
    float rad,area, perm;

    printf("Enter radius of circle: ");
    scanf("%f",&rad);

    area= pi*rad*rad;
    perm=2*pi*rad;

    printf("Area of circle: %f \nPerimeter of circle: %f\n",area,perm);
    return 0;
}
