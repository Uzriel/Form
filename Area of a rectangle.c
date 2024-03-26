
#include <stdio.h>

int main() {
    double length, width, area;
    
    // Prompt the user to enter the length and width of the rectangle
    printf("Enter the length of the rectangle: ");
    scanf("%lf", &length);
    printf("Enter the width of the rectangle: ");
    scanf("%lf", &width);
    
    // Calculate the area of the rectangle
    area = length * width;
    
    // Print the result
    printf("Area of the rectangle with length %.2lf and width %.2lf is: %.2lf\n", length, width, area);
    
    return 0;
}