#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main(){
	
	//declaring variables
	
	double width = 32.3;
	double height = 56.4;
	double perimeter = 0.0;
	double area = 0.0;
	
	//performing perimeter calculation
	
	perimeter = 2.0*(height + width);
	area = width * height;
	
	//displaying output
	
	printf("Perimeter of rectangular is: %.2f\n", perimeter);
	printf("Area of Rectangular is: %.2f\n", area);
	
	return 0;
}
