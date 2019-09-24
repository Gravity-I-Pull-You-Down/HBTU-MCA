#include <stdio.h>
int gcd(int numberOne, int numberTwo)
{
	int gcd,temp=0;
	while(numberOne!=0){
		if((numberOne % numberTwo)==0){
			printf("The gcd of these numbers is %d \n",numberTwo );
			break;
		}
		else{
			temp = numberOne % numberTwo;
			numberOne = numberTwo;
			numberTwo = temp;
		}
	}
	return numberTwo;
}
int LCM(int numberOne, int numberTwo, int gcd ){
	int lcm,temp=numberOne/gcd;
	lcm = numberTwo*temp;
	printf("and LCM of them is %d\n",lcm );
	return lcm;
}
int main(int argc, char const *argv[])
{
	int numberOne,numberTwo;
	printf("Enter first number\n");
	scanf("%d",&numberOne);
	printf("Enter second number\n");
	scanf("%d",&numberTwo);
	LCM(numberOne,numberTwo,gcd(numberOne,numberTwo));
	return 0;
}