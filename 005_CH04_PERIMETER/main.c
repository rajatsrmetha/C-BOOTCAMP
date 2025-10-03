#include <stdio.h>

int main(){
    float height, width;
    double perimeterRectangle;

    printf("Enter Height of Rectangle: ");
    scanf("%f", &height);
    printf("\nEnter Widthof Rectangle: ");
    scanf("%f", &width);
    perimeterRectangle = 2*(height + width);
    printf("Perimeter of Rectnagle is: %lf\n", perimeterRectangle);
    return 0;
}
