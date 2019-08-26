#include <stdio.h>
int main(int argc, char const *argv[])
{
	int numberOne,numberTwo,gcd,temp=0;

	printf("Enter first number\n");
	scanf("%d",&numberOne);
	printf("Enter second number\n");
	scanf("%d",&numberTwo);
	while(numberOne!=0){
		if((numberOne % numberTwo)==0){
			printf("The gcd of these numbers is %d \n",numberTwo );

			return 0;
		}
		else{
			temp = numberOne % numberTwo;
			numberOne = numberTwo;
			numberTwo = temp;
		}
	}
	return 0;
}