#include <stdio.h>

int main(int argc, char const *argv[])
{
	printf("Roll no 190231077\n");
	int firstNumber,secondNumber,choice;
	float result;

	printf("Enter first number to operate :\n");
	scanf("%d",&firstNumber);
	printf("Enter second number\n");
	scanf("%d",&secondNumber);
	printf("Enter the operation\n 1 for addition \n 2 for subtraction\n 3 for multiplication \n 4 for division\n");
	scanf("%d",&choice);

	switch(choice)
	{
	case 1:
	result = firstNumber+secondNumber;
	break;
	case 2:
	result = firstNumber-secondNumber;
	break;
	case 3:
	result = firstNumber*secondNumber;
	break;
	case 4:
	result= firstNumber/secondNumber;
	break;
	default:
	printf("Enter a valid choice\n");

	}
	printf("the answer is %f\n",result);
	return 0;
}