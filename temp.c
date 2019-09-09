#include <stdio.h>
int main(int argc, char const *argv[])
{
	float celcius,fahrenheit;
	printf("Enter temprature into celcius \n");
	scanf("%f",&celcius);
	fahrenheit = (9*celcius)/5 + 32.0;
	printf("Temprature in Fahrenheit is :%f\n",fahrenheit);
	return 0;
}