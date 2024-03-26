
#include <stdio.h>

int main() {
    double side, lateral_area;

    // demands the user to enter the side length of the cube//
    printf("Enter the side of the cube: ");
    scanf("%lf", &side);
if(side>0){
    // Calculate the lateral area of the cube//
    lateral_area = 4 * side * side;

    // Print the result//
    printf("Lateral area of the cube with side %.2lf is: %.2lf\n", side, lateral_area);
}else{
    printf("Enter a positive integer greater than 0");
}
    return 0;
}
