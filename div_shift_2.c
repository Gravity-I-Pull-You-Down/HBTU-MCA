#include <stdio.h>
int main(int argc, char const *argv[])
{
	printf("Roll no 190231077\n");
	int num;
	printf("Enter a number to divide by 2 \n");
	scanf("%d",&num);
	printf("The result is %d\n",num>>1 );
	return 0;
}