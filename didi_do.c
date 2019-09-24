#include<stdio.h>
int main(int argc, char const *argv[])
{
	int inp,count =0;
	printf("Enter a number :\n");
	scanf("%d",&inp);
	do{
		count++;
		inp/=10;
	}while(inp>0);
	printf("The number of digits in given number are %d:\n",count);
	return 0;
}