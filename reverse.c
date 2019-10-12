#include <stdio.h>
int main(int argc, char const *argv[])
{
	printf("Roll no 190231077\n");
	int num,i,rev=0;

	printf("Enter a number :\n");
	scanf("%d",&num);
	while(num>0){
		rev=rev*10+num%10;
		num /= 10;
	}
	printf("%d\n",rev );
	return 0;
}