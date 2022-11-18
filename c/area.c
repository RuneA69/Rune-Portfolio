#include <stdio.h>

// Write a program to add 3 numbers
// Ask user for 3  different numbers using scanf
// scanf("%i", ...);
// Then printf the sum of the three numbers

int main() {
	int x, y, area;
	printf("Enter length of rectangle: ");
	scanf("%i", &x);
	printf("Enter width: ");
	scanf("%i", &y);
	area = x * y;
	printf("The area of the rectangle is %i\n", area);
	return 0; 
}
