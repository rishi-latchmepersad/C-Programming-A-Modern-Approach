#include <stdio.h>
#define PI (3.14159)
int main(void)
{
    int radius;
    printf("Enter the radius of the sphere: ");
    scanf("%d", &radius);
    float volume;
    volume = (4.0f / 3.0f) * PI * radius * radius * radius;
    printf("For a sphere with radius %d, the volume is %.2f\n", radius, volume);
}