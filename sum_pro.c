#include <stdio.h>
int main(int argc, char const *argv[])
{
	printf("Roll no 190231077\n");
	int sum=0,pro=1,num;
	scanf("%d",&num);
	while(num>0){
		sum+=num%10;
		pro*=num%10;
		num/=10;
	}
	printf("Sum =%d \nProduct = %d \n",sum,pro);
	return 0;
}