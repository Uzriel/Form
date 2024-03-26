
#include <stdio.h>

int main() {
    double base, height, area;
    
    // demands the user to enter the base and height of the parallelogram//
    printf("Enter the base length of the parallelogram: ");
    scanf("%lf", &base);
    printf("Enter the height of the parallelogram: ");
    scanf("%lf", &height);
    if(base,height>0){
    // Calculate the area of the parallelogram//
    area = base * height;
    
    // Print the result
    printf("Area of the parallelogram with base %.2lf and height %.2lf is: %.2lf\n", base, height, area);
    }else{
   printf(" Enter a positive inter greater than 0 for each case");
  } 
    
    
    return 0;
}
