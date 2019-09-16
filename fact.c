#include <stdio.h>
int main(int argc, char const *argv[])
{
	int i,factorial=1, num;
	
	printf("Enter a number \n");
	scanf("%d",&num);
	for(i=num;i>=1;--i){
		factorial = factorial*i;
	}
	printf("The factorial of the given number is %d :\n",factorial );
	return 0;
}