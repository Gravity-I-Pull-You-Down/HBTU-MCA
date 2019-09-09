#include <stdio.h>
int main(int argc, char const *argv[])
{
	printf("Enter a number\n");
	int inp;
	scanf("%d",&inp);
	if (inp<0)
	{
		printf("The number is negative\n");
	}
	else
		printf("The number is positive\n");
	return 0;
}