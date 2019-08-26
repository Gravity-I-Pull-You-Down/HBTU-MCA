#include <stdio.h>
int main(int argc, char const *argv[])
{
	int num1,num2,num3;
	printf("Enter first number\n");
	scanf("%d",&num1);
	printf("Enter second number\n");
	scanf("%d",&num2);
	printf("Enter third number\n");
	scanf("%d",&num3);
	if(num3>num1)
		if (num3>num2)
		printf("%d is the greatest ",num3);
		else
		printf("%d is the greatest ",num2);
	else if (num2>num1)
		if (num2>num3)
		printf("%d is the greatest ",num2);
		else
		printf("%d is the greatest ",num3);
	else
		printf("%d is the greatest ",num1);
	return 0;
}