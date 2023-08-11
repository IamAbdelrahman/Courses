#include <stdio.h>
int main(void)
{

	float r = 0.0;
	printf("Please, Enter your radius: ");
	scanf("%f",&r);
	printf("The diameter of the circle is %f and the area is = %f\n", 2 * r, PI * r * r);
	printf("The circumference of the circle is %f\n", 2 * PI * r);

}

