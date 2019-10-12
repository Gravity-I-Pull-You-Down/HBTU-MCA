#include<stdio.h>
int main(int argc, char const *argv[])
{
	printf("Roll no 190231077\n");
	int inp,count =0;
	printf("Enter a number :\n");
	scanf("%d",&inp);
	for(int i=0;inp>0;inp/=10){
		++count;
	}
	printf("The number of digits in given number are %d:\n",count);
	return 0;
}