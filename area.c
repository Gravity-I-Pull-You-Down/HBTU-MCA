#include <stdio.h>
#include <math.h>
int area(radius);
int main()
{

	int radius;
	float a;

	printf("Enter the radius of circle \n");
	scanf("%d",&radius);
	area(radius);
	printf("area of circle is %f \n",area );
        getch();
}
int area(int radius)
{
	int a;
	a = 3.14*radius*radius;
	return a;
}
