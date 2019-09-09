#include <stdio.h>
int main(int argc, char const *argv[])
{
	int numberOne,numberTwo;
	scanf("%d%d",&numberOne,&numberTwo);
	(numberTwo>numberOne)?printf("second number is greatest\n"):printf("First number is greatest\n");
	return 0;
}