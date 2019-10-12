#include <stdio.h>
int main(int argc, char const *argv[])
{
	printf("Roll no 190231077\n");
	int radius;
	float pi=3.14,area;

	printf("Enter the radius of circle \n");
	scanf("%d",&radius);
	area = pi * radius *radius;
	printf("area of circle is %f \n",area );

	return 0;
}