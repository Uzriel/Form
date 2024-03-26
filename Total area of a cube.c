
#include <stdio.h>

int main() {
    double side, totalArea;

    printf("Enter the length of a side of the cube: ");
    scanf("%lf", &side);
    if(side>0){

    totalArea = 6 * side * side;

    printf("The total surface area of the cube is: %.2lf\n", totalArea);
    }else{
    	printf("Enter a positive integer greater than 0");
    }
    return 0;
}