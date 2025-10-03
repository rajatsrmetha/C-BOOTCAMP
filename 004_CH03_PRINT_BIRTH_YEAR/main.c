#include <stdio.h>

int main(){
    int currentYear = 0;
    int age = 0;
    printf("Enter Current Year: ");
    scanf("%d", &currentYear);
    printf("\nEnter Age: ");
    scanf("%d", &age);
    printf("Birth Year is: %d\n", (currentYear - age));
    return 0;
}
