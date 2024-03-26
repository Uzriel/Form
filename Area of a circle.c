
#include <stdio.h>

int main() {
    double radius, area;
    float π = 3.14;

    printf("Enter the radius of the circle: ");
    scanf("%lf", &radius);
    if(radius >0){
   area = π * radius * radius;
    printf("The area of the circle is: %.2lf\n", area);
    }else{
    	printf(" Enter a positive inter greater than 0");
    }

    return 0;
}