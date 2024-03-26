
#include <stdio.h>
int main() {
    double lenght1, lenght2, height, area;
    
    // demands the user to enter the lengths of the bases and the height of the trapezoid//
    printf("Enter the first length of  trapezoid: ");
    scanf("%lf", &lenght1);
    printf("Enter the second length of the trapezoid: ");
    scanf("%lf", &lenght2);
    printf("Enter the height of the trapezoid: ");
    scanf("%lf", &height);
    if(lenght1,lenght2,height>0){
    // Calculate the area of the trapezoid//
    area = (lenght1 + lenght2) * height / 2.0;
    
    // Print the result//
    printf("Area of the trapezoid with bases %.2lf and %.2lf and height %.2lf is: %.2lf\n", lenght1, lenght2, height, area);
    }else{
    	printf(" Enter a positive inter greater than 0 for each case");
 }   
    return 0;
}
