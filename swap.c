#include <stdio.h>
int main(int argc, char const *argv[])
{
	printf("Roll no 190231077\n");
	int numberOne,numberTwo,temp;
	char choice;
	printf("Do you want to use third vairable or not (y/n):\n");
	scanf("%c",&choice);
	printf("Enter first number\n");
	scanf("%d",&numberOne);
	printf("Enter second number\n");
	scanf("%d",&numberTwo);

	if (choice=='n')
	{
		numberOne = numberOne * numberTwo;
		numberTwo = numberOne / numberTwo;
		numberOne = numberOne / numberTwo;
	}
	else{
		temp=numberOne;
		numberOne = numberTwo;
		numberTwo = temp;
	}

	printf("The swaped numbers are %d and %d \n",numberOne,numberTwo );

	return 0;
}