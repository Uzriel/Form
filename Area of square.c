
#include <stdio.h>
int main() {
    double side, area;
    printf("Enter the side length of the square: ");
    scanf("%lf", &side);
    if(side>0){
      area = side * side;
   
    printf("Area of the square with side length %.2lf is: %.2lf\n", side, area);
}else{
    printf("Enter a positive integer");
}
    return 0;
}
